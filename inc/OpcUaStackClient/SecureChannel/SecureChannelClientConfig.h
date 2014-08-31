#ifndef __OpcUaStackClient_SecureChannelClientConfig_h__
#define __OpcUaStackClient_SecureChannelClientConfig_h__

#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/Config.h"
#include "OpcUaStackClient/SecureChannel/SecureChannelClient.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient
{

	class DLLEXPORT SecureChannelClientConfig
	{
	  public:
		static bool initial(SecureChannelClient::SPtr secureChannelClientSPtr, const std::string& configPrefix, Config* config = nullptr);
	};

}

#endif