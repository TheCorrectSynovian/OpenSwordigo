/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE90
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet24RegisterMessageExtensionEPKNS0_11MessageLiteEihbbS5_
 * Demangled: google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool,google::protobuf::MessageLite const*)
 *
 * Callers: 1
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Callees: 1
 *   0x00000000004D86AC  google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool,google::protobuf::MessageLite const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE98 string=0x00000000001FEE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        int a3,
        unsigned __int8 a4,
        bool a5,
        bool a6,
        const google::protobuf::MessageLite *a7)
{
  return _ZN6google8protobuf8internal12ExtensionSet24RegisterMessageExtensionEPKNS0_11MessageLiteEihbbS5_(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}

