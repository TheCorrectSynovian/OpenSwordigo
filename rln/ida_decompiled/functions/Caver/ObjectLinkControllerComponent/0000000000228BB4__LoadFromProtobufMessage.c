/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228BB4
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x0000000000228BC8 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000228BCC string=0x0000000000228BD0 ""
 *   insn=0x0000000000228BD0 string=0x0000000000228BD4 "`""
 *   insn=0x0000000000228BDC string=0x0000000000228BE0 "lX"
 *   insn=0x0000000000228BE4 string=0x0000000000228BE8 "a\n@"
 *   insn=0x0000000000228BF0 string=0x0000000000228BF4 "a"
 *   insn=0x0000000000228C00 string=0x0000000000228C04 "h"
 *   insn=0x0000000000228C04 string=0x0000000000228C08 ")"
 *   insn=0x0000000000228C0C string=0x0000000000228C10 ")"
 *   insn=0x0000000000228C10 string=0x0000000000228C14 "("
 *   insn=0x0000000000228C14 string=0x0000000000228C18 ""
 *   insn=0x0000000000228C18 string=0x0000000000228C1C "\n"
 *   insn=0x0000000000228C1C string=0x0000000000228C20 ""
 *   insn=0x0000000000228C28 string=0x0000000000228C2C "h"
 *   insn=0x0000000000228C30 string=0x0000000000228C34 "("
 *   insn=0x0000000000228C34 string=0x0000000000228C38 ""
 *   insn=0x0000000000228C38 string=0x0000000000228C3C "\n"
 *   insn=0x0000000000228C3C string=0x0000000000228C40 ""
 *   insn=0x0000000000228C48 string=0x0000000000228C4C "h"
 *   insn=0x0000000000228C54 string=0x0000000000228C58 "("
 *   insn=0x0000000000228C58 string=0x0000000000228C5C ""
 *   insn=0x0000000000228C5C string=0x0000000000228C60 "\t"
 *   insn=0x0000000000228C60 string=0x0000000000228C64 ""
 *   insn=0x0000000000228C64 string=0x0000000000228C68 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(
        Caver::ObjectLinkControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _QWORD *Message; // x19
  __int64 result; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x10
  _QWORD *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x10
  _QWORD *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = (_QWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                        (const Caver::Proto::Component *)((char *)a2 + 8),
                        Caver::Proto::ObjectLinkControllerComponent::extension,
                        (const google::protobuf::MessageLite *)qword_6E9420);
  sub_56A6A8((char *)this + 112);
  result = sub_56A6A8((char *)this + 144);
  v6 = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  if ( Message[4] )
    v7 = (__int64)Message;
  else
    v7 = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v8 + 12);
  LODWORD(v8) = *(_DWORD *)(v8 + 20);
  *(_QWORD *)((char *)this + 236) = v9;
  *((_DWORD *)this + 61) = v8;
  if ( Message[5] )
    v10 = Message;
  else
    v10 = (_QWORD *)v6;
  v11 = v10[5];
  v12 = *(_QWORD *)(v11 + 12);
  LODWORD(v11) = *(_DWORD *)(v11 + 20);
  *((_QWORD *)this + 31) = v12;
  *((_DWORD *)this + 64) = v11;
  if ( Message[6] )
    v13 = Message;
  else
    v13 = (_QWORD *)v6;
  v14 = v13[6];
  v15 = *(_QWORD *)(v14 + 12);
  LODWORD(v14) = *(_DWORD *)(v14 + 20);
  *(_QWORD *)((char *)this + 260) = v15;
  *((_DWORD *)this + 67) = v14;
  return result;
}

