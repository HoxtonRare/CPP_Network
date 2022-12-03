/**
 * robotic-arm-server-api
 * The API for the Robotic Arm Server educational project
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DeviceStateApi.h
 *
 * 
 */

#ifndef DeviceStateApi_H_
#define DeviceStateApi_H_


#include <memory>
#include <utility>
#include <exception>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include "DeviceState.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  DeviceStateApiException: public std::exception
{
public:
    DeviceStateApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  DeviceStateApiDeviceDeviceIdStateResource: public restbed::Resource
{
public:
    DeviceStateApiDeviceDeviceIdStateResource(const std::string& context = "/artiomn/robotic_arm_server/1.0.0");
    virtual ~DeviceStateApiDeviceDeviceIdStateResource();

protected:
    //////////////////////////////////////////////////////////
    // Override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual int handler_PUT(
        std::string const & deviceId, std::string const & body);

    virtual std::pair<int, std::shared_ptr<DeviceState>> handler_GET(
        std::string const & deviceId);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);

    virtual std::string getPathParam_deviceId(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_path_parameter("deviceId", "");
    }


    virtual std::string getPathParam_deviceId_x_extension(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_path_parameter("deviceId", "");
    }

    virtual std::pair<int, std::string> handleDeviceStateApiException(const DeviceStateApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);


    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, const std::string& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_PUT_internal(const std::shared_ptr<restbed::Session> session);
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};



//
// The restbed service to actually implement the REST server
//
class  DeviceStateApi
{
public:
    explicit DeviceStateApi(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~DeviceStateApi();

    virtual void setDeviceStateApiDeviceDeviceIdStateResource(std::shared_ptr<DeviceStateApiDeviceDeviceIdStateResource> spDeviceStateApiDeviceDeviceIdStateResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<DeviceStateApiDeviceDeviceIdStateResource> m_spDeviceStateApiDeviceDeviceIdStateResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* DeviceStateApi_H_ */

