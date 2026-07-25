/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283EC4
 * Mangled: _ZN5Caver18MagicBoltComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicBoltComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 41
 *   insn=0x0000000000283ED4 string=0x0000000000283ED8 "U"
 *   insn=0x0000000000283EEC string=0x0000000000283EF0 "(#"
 *   insn=0x0000000000283EEC string=0x00000000001FC2D0 "0'"
 *   insn=0x0000000000283EF0 string=0x0000000000283EF4 "ED"
 *   insn=0x0000000000283F0C string=0x0000000000283F10 "i"
 *   insn=0x0000000000283F10 string=0x0000000000283F14 "?"
 *   insn=0x0000000000283F18 string=0x0000000000283F1C "`j@"
 *   insn=0x0000000000283F1C string=0x0000000000283F20 "h"
 *   insn=0x0000000000283F28 string=0x0000000000283F2C "@"
 *   insn=0x0000000000283F2C string=0x0000000000283F30 ""
 *   insn=0x0000000000283F30 string=0x0000000000283F34 ""
 *   insn=0x0000000000283F38 string=0x0000000000283F3C ""
 *   insn=0x0000000000283F3C string=0x0000000000283F40 ""
 *   insn=0x0000000000283F48 string=0x0000000000283F4C "i"
 *   insn=0x0000000000283F4C string=0x0000000000283F50 "?"
 *   insn=0x0000000000283F54 string=0x0000000000283F58 "`v@"
 *   insn=0x0000000000283F58 string=0x0000000000283F5C "h"
 *   insn=0x0000000000283F64 string=0x0000000000283F68 "@"
 *   insn=0x0000000000283F68 string=0x0000000000283F6C ""
 *   insn=0x0000000000283F6C string=0x0000000000283F70 ""
 *   insn=0x0000000000283F74 string=0x0000000000283F78 ""
 *   insn=0x0000000000283F78 string=0x0000000000283F7C ""
 *   insn=0x0000000000283F84 string=0x0000000000283F88 "i"
 *   insn=0x0000000000283F88 string=0x0000000000283F8C "?"
 *   insn=0x0000000000283F90 string=0x0000000000283F94 "`"
 *   insn=0x0000000000283F94 string=0x0000000000283F98 "h"
 *   insn=0x0000000000283FA0 string=0x0000000000283FA4 "@"
 *   insn=0x0000000000283FA4 string=0x0000000000283FA8 ""
 *   insn=0x0000000000283FA8 string=0x0000000000283FAC ""
 *   insn=0x0000000000283FB0 string=0x0000000000283FB4 ""
 *   insn=0x0000000000283FB4 string=0x0000000000283FB8 ""
 *   insn=0x0000000000283FC4 string=0x0000000000283FC8 "\t#"
 *   insn=0x0000000000283FC4 string=0x0000000000283FFC "h"
 *   insn=0x0000000000283FCC string=0x0000000000283FD0 ")"
 *   insn=0x0000000000283FD4 string=0x0000000000283FD8 ")"
 *   insn=0x0000000000283FD8 string=0x0000000000283FDC "("
 *   insn=0x0000000000283FE4 string=0x0000000000283FE8 "*"
 *   insn=0x0000000000283FE8 string=0x00000000001FA090 "0'"
 *   insn=0x0000000000283FEC string=0x0000000000283FF0 "h""
 *   insn=0x0000000000284000 string=0x0000000000284004 "h"
 *   insn=0x000000000028402C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::MagicBoltComponent::LoadFromProtobufMessage(
        Caver::MagicBoltComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 *result; // x0
  const Caver::Proto::FloatColor *v5; // x1
  __int64 *v6; // x20
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8
  int v12; // w8
  int v13; // w8
  __int64 v14; // x8
  __int128 v15; // [xsp+8h] [xbp-38h] BYREF
  __int64 v16; // [xsp+18h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::LoadFromProtobufMessage(this, a2);
  result = (__int64 *)google::protobuf::internal::ExtensionSet::GetMessage(
                        (const Caver::Proto::Component *)((char *)a2 + 8),
                        Caver::Proto::MagicBoltComponent::extension,
                        (const google::protobuf::MessageLite *)qword_6E9810);
  v6 = result;
  v7 = *((_DWORD *)result + 3);
  if ( *((_DWORD *)this + 50) != v7 )
  {
    result = (__int64 *)*((_QWORD *)this + 26);
    *((_DWORD *)this + 50) = v7;
    *((_QWORD *)this + 26) = 0;
    if ( result )
    {
      v8 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v8;
      if ( !v8 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v9 = *((_DWORD *)v6 + 4);
  if ( *((_DWORD *)this + 56) != v9 )
  {
    result = (__int64 *)*((_QWORD *)this + 29);
    *((_DWORD *)this + 56) = v9;
    *((_QWORD *)this + 29) = 0;
    if ( result )
    {
      v10 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v10;
      if ( !v10 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v11 = *((_DWORD *)v6 + 5);
  if ( *((_DWORD *)this + 62) != v11 )
  {
    result = (__int64 *)*((_QWORD *)this + 32);
    *((_DWORD *)this + 62) = v11;
    *((_QWORD *)this + 32) = 0;
    if ( result )
    {
      v12 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v12;
      if ( !v12 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v13 = *((_DWORD *)v6 + 9);
  if ( (v13 & 8) != 0 )
  {
    if ( v6[3] )
      v14 = (__int64)v6;
    else
      v14 = Caver::Proto::MagicBoltComponent::default_instance_;
    result = Caver::FloatColorFromProtobufMessage((__int64 *)&v15, *(Caver **)(v14 + 24), v5);
    *(_OWORD *)((char *)this + 264) = v15;
    v13 = *((_DWORD *)v6 + 9);
  }
  if ( (v13 & 0x10) != 0 )
    *((_DWORD *)this + 70) = *((_DWORD *)v6 + 8);
  return result;
}

