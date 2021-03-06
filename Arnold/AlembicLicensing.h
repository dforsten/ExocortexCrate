#ifndef __ALEMBIC_LICENSING_H
#define __ALEMBIC_LICENSING_H


#define _EC_WSTR( s ) L ## s
#define EC_WSTR( s ) _EC_WSTR( s )

#define _EC_QUOTE( x ) #x
#define EC_QUOTE( x ) _EC_QUOTE( x )



// IMPORTANT, we are not using wide characters here.
#define PLUGIN_NAME						"ExocortexAlembicArnold" EC_QUOTE( crate_MAJOR_VERSION ) "." EC_QUOTE( crate_MINOR_VERSION )
#define PLUGIN_MAJOR_VERSION			crate_MAJOR_VERSION
#define PLUGIN_MINOR_VERSION			crate_MINOR_VERSION
#define PLUGIN_LICENSE_NAME				"alembic_arnold"
#define PLUGIN_LICENSE_VERSION			(crate_MAJOR_VERSION*10)

#define PLUGIN_LICENSE_IDS	{ RlmProductID( PLUGIN_LICENSE_NAME, PLUGIN_LICENSE_VERSION ), RlmProductID( "alembic_reader", PLUGIN_LICENSE_VERSION ), RlmProductID( "alembic_softimage", PLUGIN_LICENSE_VERSION ), RlmProductID( "alembic_maya", PLUGIN_LICENSE_VERSION ), RlmProductID( "alembic", PLUGIN_LICENSE_VERSION ) }

#include "CommonLog.h"

#include "ExocortexServicesProxy.h"


#define ALEMBIC_NO_LICENSE -1
#define ALEMBIC_DEMO_LICENSE 0
#define ALEMBIC_WRITER_LICENSE 1
#define ALEMBIC_READER_LICENSE 2
#define ALEMBIC_INVALID_LICENSE 3


int GetAlembicLicense();

bool HasAlembicInvalidLicense();
bool HasAlembicReaderLicense();


#endif // __ALEMBIC_LICENSING_H
