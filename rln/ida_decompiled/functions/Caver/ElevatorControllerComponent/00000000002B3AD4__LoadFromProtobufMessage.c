/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3AD4
 * Mangled: _ZN5Caver27ElevatorControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ElevatorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 17
 *   insn=0x00000000002B3AE4 string=0x00000000002B3AE8 "V"
 *   insn=0x00000000002B3AE8 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002B3AEC string=0x00000000002B3AF0 "iA"
 *   insn=0x00000000002B3B08 string=0x00000000002B3B0C "iz@"
 *   insn=0x00000000002B3B0C string=0x00000000002B3B10 "?"
 *   insn=0x00000000002B3B10 string=0x00000000002B3B14 " "
 *   insn=0x00000000002B3B14 string=0x00000000002B3B18 "`B@"
 *   insn=0x00000000002B3B18 string=0x00000000002B3B1C "hz"
 *   insn=0x00000000002B3B24 string=0x00000000002B3B28 "@"
 *   insn=0x00000000002B3B28 string=0x00000000002B3B2C ""
 *   insn=0x00000000002B3B2C string=0x00000000002B3B30 ""
 *   insn=0x00000000002B3B30 string=0x00000000002B3B34 " "
 *   insn=0x00000000002B3B34 string=0x00000000002B3B58 ""
 *   insn=0x00000000002B3B40 string=0x00000000002B3B44 ""
 *   insn=0x00000000002B3B48 string=0x00000000002B3B4C ""
 *   insn=0x00000000002B3B4C string=0x00000000002B3B50 "h"
 *   insn=0x00000000002B3B58 string=0x00000000002B3B5C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ElevatorControllerComponent::LoadFromProtobufMessage(
        Caver::ElevatorControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  unsigned int v8; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::ElevatorControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E94B8);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) == v6
    || (result = (_DWORD *)*((_QWORD *)this + 16), *((_DWORD *)this + 30) = v6, *((_QWORD *)this + 16) = 0, !result)
    || (v7 = result[2] - 1, (result[2] = v7) != 0) )
  {
    if ( (v5[5] & 2) == 0 )
      return result;
  }
  else
  {
    result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    if ( (v5[5] & 2) == 0 )
      return result;
  }
  v8 = v5[4] - 1;
  if ( v8 <= 2 )
    *((_DWORD *)this + 38) = v8;
  return result;
}

