/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C504
 * Mangled: _ZN5Caver28AnimationControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001F4BC0  Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 22
 *   insn=0x000000000021C518 string=0x000000000021C51C "H&"
 *   insn=0x000000000021C518 string=0x00000000001FA840 "0'"
 *   insn=0x000000000021C51C string=0x000000000021C520 ""
 *   insn=0x000000000021C538 string=0x000000000021C53C "iz@"
 *   insn=0x000000000021C53C string=0x000000000021C540 "?"
 *   insn=0x000000000021C544 string=0x000000000021C548 "`B@"
 *   insn=0x000000000021C548 string=0x000000000021C54C "hz"
 *   insn=0x000000000021C554 string=0x000000000021C558 "@"
 *   insn=0x000000000021C558 string=0x000000000021C55C ""
 *   insn=0x000000000021C55C string=0x000000000021C560 ""
 *   insn=0x000000000021C564 string=0x000000000021C568 ""
 *   insn=0x000000000021C568 string=0x000000000021C56C ""
 *   insn=0x000000000021C574 string=0x000000000021C578 "i"
 *   insn=0x000000000021C578 string=0x000000000021C57C "?"
 *   insn=0x000000000021C580 string=0x000000000021C584 "`N@"
 *   insn=0x000000000021C584 string=0x000000000021C588 "h"
 *   insn=0x000000000021C590 string=0x000000000021C594 "@"
 *   insn=0x000000000021C594 string=0x000000000021C598 ""
 *   insn=0x000000000021C598 string=0x000000000021C59C ""
 *   insn=0x000000000021C5A0 string=0x000000000021C5A4 ""
 *   insn=0x000000000021C5A4 string=0x000000000021C5A8 ""
 *   insn=0x000000000021C5B0 string=0x000000000021C5B4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::AnimationControllerComponent::LoadFromProtobufMessage(
        Caver::AnimationControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::AnimationControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9468);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 16) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 36) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v8;
    *((_QWORD *)this + 19) = 0;
    if ( result )
    {
      v9 = result[2] - 1;
      result[2] = v9;
      if ( !v9 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *((_BYTE *)this + 168) = *((_BYTE *)v5 + 20);
  return result;
}

