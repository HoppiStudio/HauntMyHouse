using System;
using System.Collections.Generic;
using AiDirector.Scripts;

namespace AiDirector
{
    public static class DirectorEventBus
    {
        private static readonly Dictionary<DirectorEvent, Action> _eventsDict = new();

        public static void Subscribe(DirectorEvent eventName, Action listener)
        {
            if (_eventsDict.ContainsKey(eventName))
            {
                _eventsDict[eventName] += listener;
            }
            else
            {
                _eventsDict.Add(eventName, listener);
            }
        }

        public static void Unsubscribe(DirectorEvent eventName, Action listener)
        {
            if (_eventsDict.ContainsKey(eventName))
            {
                _eventsDict[eventName] -= listener;
            }
        }

        public static void Publish(DirectorEvent eventName)
        {
            if (_eventsDict.TryGetValue(eventName, out Action thisEvent))
            {
                thisEvent.Invoke();
                //_eventsDict[eventName].Invoke(); alternative call?
            }
        }
    }
}
