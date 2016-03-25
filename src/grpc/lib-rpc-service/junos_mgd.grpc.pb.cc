// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: junos_mgd.proto

#include "junos_mgd.pb.h"
#include "junos_mgd.grpc.pb.h"

#include <grpc++/channel.h>
#include <grpc++/impl/client_unary_call.h>
#include <grpc++/impl/rpc_service_method.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/support/async_unary_call.h>
#include <grpc++/support/async_stream.h>
#include <grpc++/support/sync_stream.h>
namespace junos_mgd {

static const char* OpenConfigRpcApi_method_names[] = {
  "/junos_mgd.OpenConfigRpcApi/EditConfig",
  "/junos_mgd.OpenConfigRpcApi/GetConfig",
};

std::unique_ptr< OpenConfigRpcApi::Stub> OpenConfigRpcApi::NewStub(const std::shared_ptr< ::grpc::Channel>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< OpenConfigRpcApi::Stub> stub(new OpenConfigRpcApi::Stub(channel));
  return stub;
}

OpenConfigRpcApi::Stub::Stub(const std::shared_ptr< ::grpc::Channel>& channel)
  : channel_(channel), rpcmethod_EditConfig_(OpenConfigRpcApi_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfig_(OpenConfigRpcApi_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status OpenConfigRpcApi::Stub::EditConfig(::grpc::ClientContext* context, const ::junos_mgd::EditConfigRequest& request, ::junos_mgd::EditConfigResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_EditConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::junos_mgd::EditConfigResponse>* OpenConfigRpcApi::Stub::AsyncEditConfigRaw(::grpc::ClientContext* context, const ::junos_mgd::EditConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::junos_mgd::EditConfigResponse>(channel_.get(), cq, rpcmethod_EditConfig_, context, request);
}

::grpc::Status OpenConfigRpcApi::Stub::GetConfig(::grpc::ClientContext* context, const ::junos_mgd::GetConfigRequest& request, ::junos_mgd::GetConfigResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::junos_mgd::GetConfigResponse>* OpenConfigRpcApi::Stub::AsyncGetConfigRaw(::grpc::ClientContext* context, const ::junos_mgd::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::junos_mgd::GetConfigResponse>(channel_.get(), cq, rpcmethod_GetConfig_, context, request);
}

OpenConfigRpcApi::AsyncService::AsyncService() : ::grpc::AsynchronousService(OpenConfigRpcApi_method_names, 2) {}

OpenConfigRpcApi::Service::~Service() {
  delete service_;
}

::grpc::Status OpenConfigRpcApi::Service::EditConfig(::grpc::ServerContext* context, const ::junos_mgd::EditConfigRequest* request, ::junos_mgd::EditConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void OpenConfigRpcApi::AsyncService::RequestEditConfig(::grpc::ServerContext* context, ::junos_mgd::EditConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::junos_mgd::EditConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::Status OpenConfigRpcApi::Service::GetConfig(::grpc::ServerContext* context, const ::junos_mgd::GetConfigRequest* request, ::junos_mgd::GetConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void OpenConfigRpcApi::AsyncService::RequestGetConfig(::grpc::ServerContext* context, ::junos_mgd::GetConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::junos_mgd::GetConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::RpcService* OpenConfigRpcApi::Service::service() {
  if (service_ != nullptr) {
    return service_;
  }
  service_ = new ::grpc::RpcService();
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      OpenConfigRpcApi_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< OpenConfigRpcApi::Service, ::junos_mgd::EditConfigRequest, ::junos_mgd::EditConfigResponse>(
          std::mem_fn(&OpenConfigRpcApi::Service::EditConfig), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      OpenConfigRpcApi_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< OpenConfigRpcApi::Service, ::junos_mgd::GetConfigRequest, ::junos_mgd::GetConfigResponse>(
          std::mem_fn(&OpenConfigRpcApi::Service::GetConfig), this)));
  return service_;
}


}  // namespace junos_mgd
