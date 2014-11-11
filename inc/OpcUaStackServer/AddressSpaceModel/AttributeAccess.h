#ifndef __OpcUaStackServer_AttributeAccess_h__
#define __OpcUaStackServer_AttributeAccess_h__

#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackServer/AddressSpaceModel/Attribute.h"

namespace OpcUaStackServer
{

	class DLLEXPORT AttributeAccess
	{
	  public:
		static bool copy(Attribute& attribute, OpcUaVariant& variant);
		static bool copy(OpcUaVariant& variant, Attribute& attribute);
		static bool copy(Attribute& attribute, OpcUaDataValue& dataValue);
		static bool copy(OpcUaDataValue& dataValue, Attribute& attribute);

		static bool trigger(OpcUaDataValue& dataValue, Attribute& attribute, DataChangeTrigger dataChangeTrigger = DataChangeTrigger_Status_Value);
	};

}

#endif
