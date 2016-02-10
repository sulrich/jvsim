# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: agent.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='agent.proto',
  package='agent',
  syntax='proto3',
  serialized_pb=b'\n\x0b\x61gent.proto\x12\x05\x61gent\"h\n\x13SubscriptionRequest\x12\x1e\n\tpath_list\x18\x01 \x03(\x0b\x32\x0b.agent.Path\x12\x15\n\rlimit_records\x18\x02 \x01(\x05\x12\x1a\n\x12limit_time_seconds\x18\x03 \x01(\x05\" \n\x12UnSubscribeRequest\x12\n\n\x02id\x18\x01 \x01(\x05\"+\n\nGetRequest\x12\x11\n\tverbosity\x18\x01 \x01(\x05\x12\n\n\x02id\x18\x02 \x01(\x05\"Z\n\x05Reply\x12\x1f\n\x04\x63ode\x18\x01 \x01(\x0e\x32\x11.agent.ReturnCode\x12\x10\n\x08\x63ode_str\x18\x02 \x01(\t\x12\x1e\n\tpath_list\x18\x03 \x03(\x0b\x32\x0b.agent.Path\"w\n\x04Path\x12\x0c\n\x04path\x18\x01 \x01(\t\x12\x0e\n\x06\x66ilter\x18\x02 \x01(\t\x12\x18\n\x10sample_frequency\x18\x03 \x01(\r\x12\x1a\n\x12suppress_unchanged\x18\x04 \x01(\x08\x12\x1b\n\x13max_silent_interval\x18\x05 \x01(\r\"\xb1\x01\n\x0eOpenConfigData\x12\x11\n\tsystem_id\x18\x01 \x01(\t\x12\x14\n\x0c\x63omponent_id\x18\x02 \x01(\r\x12\x18\n\x10sub_component_id\x18\x03 \x01(\r\x12\x13\n\x0bsensor_name\x18\x04 \x01(\t\x12\x17\n\x0fsequence_number\x18\x05 \x01(\r\x12\x11\n\ttimestamp\x18\x06 \x01(\x04\x12\x1b\n\x02kv\x18\x07 \x03(\x0b\x32\x0f.agent.KeyValue\"=\n\x08KeyValue\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x11\n\tint_value\x18\x02 \x01(\x03\x12\x11\n\tstr_value\x18\x03 \x01(\t*P\n\nReturnCode\x12\x08\n\x04NONE\x10\x00\x12\x06\n\x02OK\x10\x01\x12\x19\n\x15NO_SUBSCRIPTION_ENTRY\x10\x02\x12\x15\n\x11UNSUPPORTED_PATHS\x10\x03\x32\xac\x02\n\x05\x41gent\x12K\n\x12telemetrySubscribe\x12\x1a.agent.SubscriptionRequest\x1a\x15.agent.OpenConfigData\"\x00\x30\x01\x12\x41\n\x14telemetryUnSubscribe\x12\x19.agent.UnSubscribeRequest\x1a\x0c.agent.Reply\"\x00\x12G\n\x19telemetrySubscriptionsGet\x12\x11.agent.GetRequest\x1a\x15.agent.OpenConfigData\"\x00\x12J\n\x1ctelemetryOperationalStateGet\x12\x11.agent.GetRequest\x1a\x15.agent.OpenConfigData\"\x00\x62\x06proto3'
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_RETURNCODE = _descriptor.EnumDescriptor(
  name='ReturnCode',
  full_name='agent.ReturnCode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NONE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OK', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NO_SUBSCRIPTION_ENTRY', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNSUPPORTED_PATHS', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=663,
  serialized_end=743,
)
_sym_db.RegisterEnumDescriptor(_RETURNCODE)

ReturnCode = enum_type_wrapper.EnumTypeWrapper(_RETURNCODE)
NONE = 0
OK = 1
NO_SUBSCRIPTION_ENTRY = 2
UNSUPPORTED_PATHS = 3



_SUBSCRIPTIONREQUEST = _descriptor.Descriptor(
  name='SubscriptionRequest',
  full_name='agent.SubscriptionRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='path_list', full_name='agent.SubscriptionRequest.path_list', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='limit_records', full_name='agent.SubscriptionRequest.limit_records', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='limit_time_seconds', full_name='agent.SubscriptionRequest.limit_time_seconds', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=22,
  serialized_end=126,
)


_UNSUBSCRIBEREQUEST = _descriptor.Descriptor(
  name='UnSubscribeRequest',
  full_name='agent.UnSubscribeRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='agent.UnSubscribeRequest.id', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=128,
  serialized_end=160,
)


_GETREQUEST = _descriptor.Descriptor(
  name='GetRequest',
  full_name='agent.GetRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='verbosity', full_name='agent.GetRequest.verbosity', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='id', full_name='agent.GetRequest.id', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=162,
  serialized_end=205,
)


_REPLY = _descriptor.Descriptor(
  name='Reply',
  full_name='agent.Reply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='code', full_name='agent.Reply.code', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='code_str', full_name='agent.Reply.code_str', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='path_list', full_name='agent.Reply.path_list', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=207,
  serialized_end=297,
)


_PATH = _descriptor.Descriptor(
  name='Path',
  full_name='agent.Path',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='path', full_name='agent.Path.path', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='filter', full_name='agent.Path.filter', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sample_frequency', full_name='agent.Path.sample_frequency', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='suppress_unchanged', full_name='agent.Path.suppress_unchanged', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='max_silent_interval', full_name='agent.Path.max_silent_interval', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=299,
  serialized_end=418,
)


_OPENCONFIGDATA = _descriptor.Descriptor(
  name='OpenConfigData',
  full_name='agent.OpenConfigData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='system_id', full_name='agent.OpenConfigData.system_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='component_id', full_name='agent.OpenConfigData.component_id', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sub_component_id', full_name='agent.OpenConfigData.sub_component_id', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sensor_name', full_name='agent.OpenConfigData.sensor_name', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sequence_number', full_name='agent.OpenConfigData.sequence_number', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='agent.OpenConfigData.timestamp', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='kv', full_name='agent.OpenConfigData.kv', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=421,
  serialized_end=598,
)


_KEYVALUE = _descriptor.Descriptor(
  name='KeyValue',
  full_name='agent.KeyValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='agent.KeyValue.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='int_value', full_name='agent.KeyValue.int_value', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='str_value', full_name='agent.KeyValue.str_value', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=600,
  serialized_end=661,
)

_SUBSCRIPTIONREQUEST.fields_by_name['path_list'].message_type = _PATH
_REPLY.fields_by_name['code'].enum_type = _RETURNCODE
_REPLY.fields_by_name['path_list'].message_type = _PATH
_OPENCONFIGDATA.fields_by_name['kv'].message_type = _KEYVALUE
DESCRIPTOR.message_types_by_name['SubscriptionRequest'] = _SUBSCRIPTIONREQUEST
DESCRIPTOR.message_types_by_name['UnSubscribeRequest'] = _UNSUBSCRIBEREQUEST
DESCRIPTOR.message_types_by_name['GetRequest'] = _GETREQUEST
DESCRIPTOR.message_types_by_name['Reply'] = _REPLY
DESCRIPTOR.message_types_by_name['Path'] = _PATH
DESCRIPTOR.message_types_by_name['OpenConfigData'] = _OPENCONFIGDATA
DESCRIPTOR.message_types_by_name['KeyValue'] = _KEYVALUE
DESCRIPTOR.enum_types_by_name['ReturnCode'] = _RETURNCODE

SubscriptionRequest = _reflection.GeneratedProtocolMessageType('SubscriptionRequest', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIPTIONREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.SubscriptionRequest)
  ))
_sym_db.RegisterMessage(SubscriptionRequest)

UnSubscribeRequest = _reflection.GeneratedProtocolMessageType('UnSubscribeRequest', (_message.Message,), dict(
  DESCRIPTOR = _UNSUBSCRIBEREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.UnSubscribeRequest)
  ))
_sym_db.RegisterMessage(UnSubscribeRequest)

GetRequest = _reflection.GeneratedProtocolMessageType('GetRequest', (_message.Message,), dict(
  DESCRIPTOR = _GETREQUEST,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.GetRequest)
  ))
_sym_db.RegisterMessage(GetRequest)

Reply = _reflection.GeneratedProtocolMessageType('Reply', (_message.Message,), dict(
  DESCRIPTOR = _REPLY,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.Reply)
  ))
_sym_db.RegisterMessage(Reply)

Path = _reflection.GeneratedProtocolMessageType('Path', (_message.Message,), dict(
  DESCRIPTOR = _PATH,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.Path)
  ))
_sym_db.RegisterMessage(Path)

OpenConfigData = _reflection.GeneratedProtocolMessageType('OpenConfigData', (_message.Message,), dict(
  DESCRIPTOR = _OPENCONFIGDATA,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.OpenConfigData)
  ))
_sym_db.RegisterMessage(OpenConfigData)

KeyValue = _reflection.GeneratedProtocolMessageType('KeyValue', (_message.Message,), dict(
  DESCRIPTOR = _KEYVALUE,
  __module__ = 'agent_pb2'
  # @@protoc_insertion_point(class_scope:agent.KeyValue)
  ))
_sym_db.RegisterMessage(KeyValue)


# @@protoc_insertion_point(module_scope)