// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: openconfig_mgd.proto
#ifndef GRPC_openconfig_5fmgd_2eproto__INCLUDED
#define GRPC_openconfig_5fmgd_2eproto__INCLUDED

#include "openconfig_mgd.pb.h"

#include <grpc++/support/async_stream.h>
#include <grpc++/impl/rpc_method.h>
#include <grpc++/impl/proto_utils.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/support/async_unary_call.h>
#include <grpc++/support/status.h>
#include <grpc++/support/stub_options.h>
#include <grpc++/support/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace openconfig {

class OpenconfigRpcApi GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetDataEncodings(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::openconfig::GetDataEncodingsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetDataEncodingsResponse>> AsyncGetDataEncodings(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetDataEncodingsResponse>>(AsyncGetDataEncodingsRaw(context, request, cq));
    }
    virtual ::grpc::Status SetDataEncoding(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::openconfig::SetDataEncodingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetDataEncodingResponse>> AsyncSetDataEncoding(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetDataEncodingResponse>>(AsyncSetDataEncodingRaw(context, request, cq));
    }
    virtual ::grpc::Status GetModels(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::openconfig::GetModelsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetModelsResponse>> AsyncGetModels(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetModelsResponse>>(AsyncGetModelsRaw(context, request, cq));
    }
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::openconfig::GetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    virtual ::grpc::Status Set(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::openconfig::SetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::openconfig::ExecuteOpCommandResponse>> ExecuteOpCommand(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::openconfig::ExecuteOpCommandResponse>>(ExecuteOpCommandRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::openconfig::ExecuteOpCommandResponse>> AsyncExecuteOpCommand(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::openconfig::ExecuteOpCommandResponse>>(AsyncExecuteOpCommandRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status GetEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::openconfig::GetEphemeralConfigResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetEphemeralConfigResponse>> AsyncGetEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetEphemeralConfigResponse>>(AsyncGetEphemeralConfigRaw(context, request, cq));
    }
    virtual ::grpc::Status EditEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::openconfig::EditEphemeralConfigResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::EditEphemeralConfigResponse>> AsyncEditEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::EditEphemeralConfigResponse>>(AsyncEditEphemeralConfigRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetDataEncodingsResponse>* AsyncGetDataEncodingsRaw(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetDataEncodingResponse>* AsyncSetDataEncodingRaw(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetModelsResponse>* AsyncGetModelsRaw(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::openconfig::ExecuteOpCommandResponse>* ExecuteOpCommandRaw(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::openconfig::ExecuteOpCommandResponse>* AsyncExecuteOpCommandRaw(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::GetEphemeralConfigResponse>* AsyncGetEphemeralConfigRaw(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::openconfig::EditEphemeralConfigResponse>* AsyncEditEphemeralConfigRaw(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::Channel>& channel);
    ::grpc::Status GetDataEncodings(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::openconfig::GetDataEncodingsResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetDataEncodingsResponse>> AsyncGetDataEncodings(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetDataEncodingsResponse>>(AsyncGetDataEncodingsRaw(context, request, cq));
    }
    ::grpc::Status SetDataEncoding(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::openconfig::SetDataEncodingResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::SetDataEncodingResponse>> AsyncSetDataEncoding(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::SetDataEncodingResponse>>(AsyncSetDataEncodingRaw(context, request, cq));
    }
    ::grpc::Status GetModels(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::openconfig::GetModelsResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetModelsResponse>> AsyncGetModels(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetModelsResponse>>(AsyncGetModelsRaw(context, request, cq));
    }
    ::grpc::Status Get(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::openconfig::GetResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    ::grpc::Status Set(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::openconfig::SetResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::openconfig::ExecuteOpCommandResponse>> ExecuteOpCommand(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::openconfig::ExecuteOpCommandResponse>>(ExecuteOpCommandRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::openconfig::ExecuteOpCommandResponse>> AsyncExecuteOpCommand(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::openconfig::ExecuteOpCommandResponse>>(AsyncExecuteOpCommandRaw(context, request, cq, tag));
    }
    ::grpc::Status GetEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::openconfig::GetEphemeralConfigResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetEphemeralConfigResponse>> AsyncGetEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::GetEphemeralConfigResponse>>(AsyncGetEphemeralConfigRaw(context, request, cq));
    }
    ::grpc::Status EditEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::openconfig::EditEphemeralConfigResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::EditEphemeralConfigResponse>> AsyncEditEphemeralConfig(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::openconfig::EditEphemeralConfigResponse>>(AsyncEditEphemeralConfigRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::Channel> channel_;
    ::grpc::ClientAsyncResponseReader< ::openconfig::GetDataEncodingsResponse>* AsyncGetDataEncodingsRaw(::grpc::ClientContext* context, const ::openconfig::GetDataEncodingsRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::SetDataEncodingResponse>* AsyncSetDataEncodingRaw(::grpc::ClientContext* context, const ::openconfig::SetDataEncodingRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::GetModelsResponse>* AsyncGetModelsRaw(::grpc::ClientContext* context, const ::openconfig::GetModelsRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::openconfig::GetRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::openconfig::SetRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::openconfig::ExecuteOpCommandResponse>* ExecuteOpCommandRaw(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::openconfig::ExecuteOpCommandResponse>* AsyncExecuteOpCommandRaw(::grpc::ClientContext* context, const ::openconfig::ExecuteOpCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::GetEphemeralConfigResponse>* AsyncGetEphemeralConfigRaw(::grpc::ClientContext* context, const ::openconfig::GetEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::openconfig::EditEphemeralConfigResponse>* AsyncEditEphemeralConfigRaw(::grpc::ClientContext* context, const ::openconfig::EditEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_GetDataEncodings_;
    const ::grpc::RpcMethod rpcmethod_SetDataEncoding_;
    const ::grpc::RpcMethod rpcmethod_GetModels_;
    const ::grpc::RpcMethod rpcmethod_Get_;
    const ::grpc::RpcMethod rpcmethod_Set_;
    const ::grpc::RpcMethod rpcmethod_ExecuteOpCommand_;
    const ::grpc::RpcMethod rpcmethod_GetEphemeralConfig_;
    const ::grpc::RpcMethod rpcmethod_EditEphemeralConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::Channel>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::SynchronousService {
   public:
    Service() : service_(nullptr) {}
    virtual ~Service();
    virtual ::grpc::Status GetDataEncodings(::grpc::ServerContext* context, const ::openconfig::GetDataEncodingsRequest* request, ::openconfig::GetDataEncodingsResponse* response);
    virtual ::grpc::Status SetDataEncoding(::grpc::ServerContext* context, const ::openconfig::SetDataEncodingRequest* request, ::openconfig::SetDataEncodingResponse* response);
    virtual ::grpc::Status GetModels(::grpc::ServerContext* context, const ::openconfig::GetModelsRequest* request, ::openconfig::GetModelsResponse* response);
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::openconfig::GetRequest* request, ::openconfig::GetResponse* response);
    virtual ::grpc::Status Set(::grpc::ServerContext* context, const ::openconfig::SetRequest* request, ::openconfig::SetResponse* response);
    virtual ::grpc::Status ExecuteOpCommand(::grpc::ServerContext* context, const ::openconfig::ExecuteOpCommandRequest* request, ::grpc::ServerWriter< ::openconfig::ExecuteOpCommandResponse>* writer);
    virtual ::grpc::Status GetEphemeralConfig(::grpc::ServerContext* context, const ::openconfig::GetEphemeralConfigRequest* request, ::openconfig::GetEphemeralConfigResponse* response);
    virtual ::grpc::Status EditEphemeralConfig(::grpc::ServerContext* context, const ::openconfig::EditEphemeralConfigRequest* request, ::openconfig::EditEphemeralConfigResponse* response);
    ::grpc::RpcService* service() GRPC_OVERRIDE GRPC_FINAL;
   private:
    ::grpc::RpcService* service_;
  };
  class AsyncService GRPC_FINAL : public ::grpc::AsynchronousService {
   public:
    explicit AsyncService();
    ~AsyncService() {};
    void RequestGetDataEncodings(::grpc::ServerContext* context, ::openconfig::GetDataEncodingsRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::GetDataEncodingsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestSetDataEncoding(::grpc::ServerContext* context, ::openconfig::SetDataEncodingRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::SetDataEncodingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestGetModels(::grpc::ServerContext* context, ::openconfig::GetModelsRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::GetModelsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestGet(::grpc::ServerContext* context, ::openconfig::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::GetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestSet(::grpc::ServerContext* context, ::openconfig::SetRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::SetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestExecuteOpCommand(::grpc::ServerContext* context, ::openconfig::ExecuteOpCommandRequest* request, ::grpc::ServerAsyncWriter< ::openconfig::ExecuteOpCommandResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestGetEphemeralConfig(::grpc::ServerContext* context, ::openconfig::GetEphemeralConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::GetEphemeralConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
    void RequestEditEphemeralConfig(::grpc::ServerContext* context, ::openconfig::EditEphemeralConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::openconfig::EditEphemeralConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
  };
};

}  // namespace openconfig


#endif  // GRPC_openconfig_5fmgd_2eproto__INCLUDED