/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286D94
 * Mangled: _ZN5Caver23MagicExplosionComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicExplosionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 34
 *   insn=0x0000000000286DA4 string=0x0000000000286DA8 "U"
 *   insn=0x0000000000286DBC string=0x0000000000286DC0 "#"
 *   insn=0x0000000000286DBC string=0x00000000001FA840 "0'"
 *   insn=0x0000000000286DC0 string=0x0000000000286DC4 ""
 *   insn=0x0000000000286DDC string=0x0000000000286DE0 "iz@"
 *   insn=0x0000000000286DE0 string=0x0000000000286DE4 "?"
 *   insn=0x0000000000286DE8 string=0x0000000000286DEC "`B@"
 *   insn=0x0000000000286DEC string=0x0000000000286DF0 "hz"
 *   insn=0x0000000000286DF8 string=0x0000000000286DFC "@"
 *   insn=0x0000000000286DFC string=0x0000000000286E00 ""
 *   insn=0x0000000000286E00 string=0x0000000000286E04 ""
 *   insn=0x0000000000286E08 string=0x0000000000286E0C ""
 *   insn=0x0000000000286E0C string=0x0000000000286E10 ""
 *   insn=0x0000000000286E1C string=0x0000000000286E20 "("
 *   insn=0x0000000000286E20 string=0x0000000000286E24 "h"
 *   insn=0x0000000000286E28 string=0x0000000000286E2C "h"
 *   insn=0x0000000000286E30 string=0x0000000000286E34 "i"
 *   insn=0x0000000000286E34 string=0x0000000000286E38 "?"
 *   insn=0x0000000000286E3C string=0x0000000000286E40 "`N@"
 *   insn=0x0000000000286E40 string=0x0000000000286E44 "h"
 *   insn=0x0000000000286E4C string=0x0000000000286E50 "@"
 *   insn=0x0000000000286E50 string=0x0000000000286E54 ""
 *   insn=0x0000000000286E54 string=0x0000000000286E58 ""
 *   insn=0x0000000000286E5C string=0x0000000000286E60 ""
 *   insn=0x0000000000286E60 string=0x0000000000286E64 ""
 *   insn=0x0000000000286E94 string=0x0000000000286E98 ")G"
 *   insn=0x0000000000286E9C string=0x0000000000286EA0 ")"
 *   insn=0x0000000000286EA0 string=0x0000000000286EA4 "("
 *   insn=0x0000000000286EAC string=0x0000000000286EB0 "x"
 *   insn=0x0000000000286EB0 string=0x00000000001FA090 "0'"
 *   insn=0x0000000000286EB4 string=0x0000000000286EB8 "`."
 *   insn=0x0000000000286EBC string=0x0000000000286EC0 "("
 *   insn=0x0000000000286EC4 string=0x0000000000286EC8 "i"
 *   insn=0x0000000000286ED4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::MagicExplosionComponent::LoadFromProtobufMessage(
        __int64 **this,
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
  __int64 v12; // x8
  __int128 v13; // [xsp+8h] [xbp-38h] BYREF
  __int64 v14; // [xsp+18h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage((Caver::Component *)this, a2);
  result = (__int64 *)google::protobuf::internal::ExtensionSet::GetMessage(
                        (const Caver::Proto::Component *)((char *)a2 + 8),
                        Caver::Proto::MagicExplosionComponent::extension,
                        (const google::protobuf::MessageLite *)qword_6E9820);
  v6 = result;
  v7 = *((_DWORD *)result + 3);
  if ( *((_DWORD *)this + 30) != v7 )
  {
    result = this[16];
    *((_DWORD *)this + 30) = v7;
    this[16] = 0;
    if ( result )
    {
      v8 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v8;
      if ( !v8 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v9 = *((_DWORD *)v6 + 9);
  if ( (v9 & 2) == 0 )
  {
    if ( (v9 & 4) == 0 )
      goto LABEL_7;
LABEL_18:
    *((_DWORD *)this + 56) = *((_DWORD *)v6 + 6);
    if ( (v9 & 8) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v6[2] )
    v12 = (__int64)v6;
  else
    v12 = Caver::Proto::MagicExplosionComponent::default_instance_;
  result = Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *(Caver **)(v12 + 16), v5);
  *((_OWORD *)this + 11) = v13;
  v9 = *((_DWORD *)v6 + 9);
  if ( (v9 & 4) != 0 )
    goto LABEL_18;
LABEL_7:
  if ( (v9 & 8) != 0 )
LABEL_8:
    *((_DWORD *)this + 57) = *((_DWORD *)v6 + 7);
LABEL_9:
  v10 = *((_DWORD *)v6 + 8);
  if ( *((_DWORD *)this + 36) != v10 )
  {
    result = this[19];
    *((_DWORD *)this + 36) = v10;
    this[19] = 0;
    if ( result )
    {
      v11 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v11;
      if ( !v11 )
        return (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  return result;
}

