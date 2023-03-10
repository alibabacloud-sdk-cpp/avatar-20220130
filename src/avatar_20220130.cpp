// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/avatar_20220130.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Avatar20220130;

Alibabacloud_Avatar20220130::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("avatar"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Avatar20220130::Client::getEndpoint(shared_ptr<string> productId,
                                                        shared_ptr<string> regionId,
                                                        shared_ptr<string> endpointRule,
                                                        shared_ptr<string> network,
                                                        shared_ptr<string> suffix,
                                                        shared_ptr<map<string, string>> endpointMap,
                                                        shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CancelVideoTaskResponse Alibabacloud_Avatar20220130::Client::cancelVideoTaskWithOptions(shared_ptr<CancelVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CancelVideoTaskShrinkRequest> request = make_shared<CancelVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CancelVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUuid)) {
    query->insert(pair<string, string>("TaskUuid", *request->taskUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelVideoTaskResponse(callApi(params, req, runtime));
}

CancelVideoTaskResponse Alibabacloud_Avatar20220130::Client::cancelVideoTask(shared_ptr<CancelVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelVideoTaskWithOptions(request, runtime);
}

CloseTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::closeTimedResetOperateWithOptions(shared_ptr<CloseTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseTimedResetOperate"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseTimedResetOperateResponse(callApi(params, req, runtime));
}

CloseTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::closeTimedResetOperate(shared_ptr<CloseTimedResetOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeTimedResetOperateWithOptions(request, runtime);
}

DuplexDecisionResponse Alibabacloud_Avatar20220130::Client::duplexDecisionWithOptions(shared_ptr<DuplexDecisionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DuplexDecisionShrinkRequest> request = make_shared<DuplexDecisionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customKeywords)) {
    request->customKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customKeywords, make_shared<string>("CustomKeywords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DuplexDecisionRequestDialogContext>(tmpReq->dialogContext)) {
    request->dialogContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dialogContext, make_shared<string>("DialogContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRequestId)) {
    query->insert(pair<string, string>("BizRequestId", *request->bizRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callTime)) {
    query->insert(pair<string, long>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customKeywordsShrink)) {
    query->insert(pair<string, string>("CustomKeywords", *request->customKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogContextShrink)) {
    query->insert(pair<string, string>("DialogContext", *request->dialogContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogStatus)) {
    query->insert(pair<string, string>("DialogStatus", *request->dialogStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interruptType)) {
    query->insert(pair<string, long>("InterruptType", *request->interruptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DuplexDecision"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DuplexDecisionResponse(callApi(params, req, runtime));
}

DuplexDecisionResponse Alibabacloud_Avatar20220130::Client::duplexDecision(shared_ptr<DuplexDecisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return duplexDecisionWithOptions(request, runtime);
}

GetVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::getVideoTaskInfoWithOptions(shared_ptr<GetVideoTaskInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetVideoTaskInfoShrinkRequest> request = make_shared<GetVideoTaskInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetVideoTaskInfoRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoTaskInfo"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoTaskInfoResponse(callApi(params, req, runtime));
}

GetVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::getVideoTaskInfo(shared_ptr<GetVideoTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoTaskInfoWithOptions(request, runtime);
}

QueryRunningInstanceResponse Alibabacloud_Avatar20220130::Client::queryRunningInstanceWithOptions(shared_ptr<QueryRunningInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryRunningInstanceShrinkRequest> request = make_shared<QueryRunningInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryRunningInstanceRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRunningInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRunningInstanceResponse(callApi(params, req, runtime));
}

QueryRunningInstanceResponse Alibabacloud_Avatar20220130::Client::queryRunningInstance(shared_ptr<QueryRunningInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRunningInstanceWithOptions(request, runtime);
}

QueryTimedResetOperateStatusResponse Alibabacloud_Avatar20220130::Client::queryTimedResetOperateStatusWithOptions(shared_ptr<QueryTimedResetOperateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTimedResetOperateStatus"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTimedResetOperateStatusResponse(callApi(params, req, runtime));
}

QueryTimedResetOperateStatusResponse Alibabacloud_Avatar20220130::Client::queryTimedResetOperateStatus(shared_ptr<QueryTimedResetOperateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTimedResetOperateStatusWithOptions(request, runtime);
}

SendMessageResponse Alibabacloud_Avatar20220130::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageShrinkRequest> request = make_shared<SendMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestTextRequest>(tmpReq->textRequest)) {
    request->textRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textRequest, make_shared<string>("TextRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestVAMLRequest>(tmpReq->VAMLRequest)) {
    request->VAMLRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->VAMLRequest, make_shared<string>("VAMLRequest"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textRequestShrink)) {
    query->insert(pair<string, string>("TextRequest", *request->textRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VAMLRequestShrink)) {
    query->insert(pair<string, string>("VAMLRequest", *request->VAMLRequestShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessage"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageResponse(callApi(params, req, runtime));
}

SendMessageResponse Alibabacloud_Avatar20220130::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Avatar20220130::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartInstanceShrinkRequest> request = make_shared<StartInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestChannel>(tmpReq->channel)) {
    request->channelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channel, make_shared<string>("Channel"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestCommandRequest>(tmpReq->commandRequest)) {
    request->commandRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commandRequest, make_shared<string>("CommandRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelShrink)) {
    query->insert(pair<string, string>("Channel", *request->channelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandRequestShrink)) {
    query->insert(pair<string, string>("CommandRequest", *request->commandRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userShrink)) {
    query->insert(pair<string, string>("User", *request->userShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartInstanceResponse(callApi(params, req, runtime));
}

StartInstanceResponse Alibabacloud_Avatar20220130::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StartTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::startTimedResetOperateWithOptions(shared_ptr<StartTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTimedResetOperate"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTimedResetOperateResponse(callApi(params, req, runtime));
}

StartTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::startTimedResetOperate(shared_ptr<StartTimedResetOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTimedResetOperateWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Avatar20220130::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Avatar20220130::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

SubmitTextTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo2DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTextTo2DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitTextTo2DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestAudioInfo>(tmpReq->audioInfo)) {
    request->audioInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->audioInfo, make_shared<string>("AudioInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioInfoShrink)) {
    query->insert(pair<string, string>("AudioInfo", *request->audioInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextTo2DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextTo2DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitTextTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo2DAvatarVideoTask(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextTo2DAvatarVideoTaskWithOptions(request, runtime);
}

SubmitTextTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo3DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTextTo3DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitTextTo3DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextTo3DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextTo3DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitTextTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo3DAvatarVideoTask(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextTo3DAvatarVideoTaskWithOptions(request, runtime);
}

SubmitTextToSignVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextToSignVideoTaskWithOptions(shared_ptr<SubmitTextToSignVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTextToSignVideoTaskShrinkRequest> request = make_shared<SubmitTextToSignVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTextToSignVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextToSignVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextToSignVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextToSignVideoTaskResponse(callApi(params, req, runtime));
}

SubmitTextToSignVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextToSignVideoTask(shared_ptr<SubmitTextToSignVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextToSignVideoTaskWithOptions(request, runtime);
}

