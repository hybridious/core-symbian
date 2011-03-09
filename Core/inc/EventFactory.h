/*
 ============================================================================
 Name		: Factory.h
 Author	  : Marco Bellino
 Version	 : 1.0
 Copyright   : Your copyright notice
 Description : CFactory declaration
 ============================================================================
 */

#ifndef FACTORY_H
#define FACTORY_H

// INCLUDES
#include <e32std.h>
#include <e32base.h>

#include <HT\AbstractEvent.h>
// CLASS DECLARATION

/**
 *  Factory
 */
class EventFactory
	{
public:
	/**
	 * Creates a new Event instance
	 * 
	 * @param aId EventType identifier
	 * @param params Event's parameteters
	 * @param aTriggerId identifier which will be used to notify the Event
	 */
	IMPORT_C static CAbstractEvent* CreateEventL(TEventType aId, const TDesC8& params, TInt aTriggerId);
	};

#endif // FACTORY_H
