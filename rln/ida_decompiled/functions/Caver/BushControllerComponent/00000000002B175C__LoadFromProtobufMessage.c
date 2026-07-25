/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B175C
 * Mangled: _ZN5Caver23BushControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BushControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 31
 *   insn=0x00000000002B176C string=0x00000000002B1770 "4$"
 *   insn=0x00000000002B1770 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002B1774 string=0x00000000002B1778 ""
 *   insn=0x00000000002B1790 string=0x00000000002B1794 "iz@"
 *   insn=0x00000000002B1794 string=0x00000000002B1798 "?"
 *   insn=0x00000000002B179C string=0x00000000002B17A0 "`B@"
 *   insn=0x00000000002B17A0 string=0x00000000002B17A4 "hz"
 *   insn=0x00000000002B17AC string=0x00000000002B17B0 "@"
 *   insn=0x00000000002B17B0 string=0x00000000002B17B4 ""
 *   insn=0x00000000002B17B4 string=0x00000000002B17B8 ""
 *   insn=0x00000000002B17BC string=0x00000000002B17C0 ""
 *   insn=0x00000000002B17C0 string=0x00000000002B17C4 ""
 *   insn=0x00000000002B17CC string=0x00000000002B17D0 "i"
 *   insn=0x00000000002B17D0 string=0x00000000002B17D4 "?"
 *   insn=0x00000000002B17D8 string=0x00000000002B17DC "`N@"
 *   insn=0x00000000002B17DC string=0x00000000002B17E0 "h"
 *   insn=0x00000000002B17E8 string=0x00000000002B17EC "@"
 *   insn=0x00000000002B17EC string=0x00000000002B17F0 ""
 *   insn=0x00000000002B17F0 string=0x00000000002B17F4 ""
 *   insn=0x00000000002B17F8 string=0x00000000002B17FC ""
 *   insn=0x00000000002B17FC string=0x00000000002B1800 ""
 *   insn=0x00000000002B1808 string=0x00000000002B180C "i"
 *   insn=0x00000000002B180C string=0x00000000002B1810 "?"
 *   insn=0x00000000002B1810 string=0x00000000002B1814 " "
 *   insn=0x00000000002B1814 string=0x00000000002B1818 "`Z@"
 *   insn=0x00000000002B1818 string=0x00000000002B181C "h"
 *   insn=0x00000000002B1824 string=0x00000000002B1828 "@"
 *   insn=0x00000000002B1828 string=0x00000000002B182C ""
 *   insn=0x00000000002B182C string=0x00000000002B1830 ""
 *   insn=0x00000000002B1834 string=0x00000000002B1844 ""
 *   insn=0x00000000002B1850 string=0x00000000002B1854 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BushControllerComponent::LoadFromProtobufMessage(
        Caver::BushControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::BushControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E94A8);
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
  v10 = v5[5];
  if ( *((_DWORD *)this + 42) != v10 )
  {
    result = (_DWORD *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 42) = v10;
    *((_QWORD *)this + 22) = 0;
    if ( result )
    {
      v11 = result[2] - 1;
      result[2] = v11;
      if ( !v11 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

