/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1DBC
 * Mangled: _ZN5Caver20FireEmitterComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::FireEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 58
 *   insn=0x00000000002A1DCC string=0x00000000002A1DD0 "U"
 *   insn=0x00000000002A1DE4 string=0x00000000002A1DE8 "(""
 *   insn=0x00000000002A1DE4 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002A1DE8 string=0x00000000002A1DEC ""
 *   insn=0x00000000002A1E04 string=0x00000000002A1E08 "iz@"
 *   insn=0x00000000002A1E08 string=0x00000000002A1E0C "?"
 *   insn=0x00000000002A1E10 string=0x00000000002A1E14 "`B@"
 *   insn=0x00000000002A1E14 string=0x00000000002A1E18 "hz"
 *   insn=0x00000000002A1E20 string=0x00000000002A1E24 "@"
 *   insn=0x00000000002A1E24 string=0x00000000002A1E28 ""
 *   insn=0x00000000002A1E28 string=0x00000000002A1E2C ""
 *   insn=0x00000000002A1E30 string=0x00000000002A1E34 ""
 *   insn=0x00000000002A1E34 string=0x00000000002A1E38 ""
 *   insn=0x00000000002A1E40 string=0x00000000002A1E44 "i"
 *   insn=0x00000000002A1E44 string=0x00000000002A1E48 "?"
 *   insn=0x00000000002A1E48 string=0x00000000002A1E4C " "
 *   insn=0x00000000002A1E4C string=0x00000000002A1E50 "`N@"
 *   insn=0x00000000002A1E50 string=0x00000000002A1E54 "h"
 *   insn=0x00000000002A1E5C string=0x00000000002A1E60 "@"
 *   insn=0x00000000002A1E60 string=0x00000000002A1E64 ""
 *   insn=0x00000000002A1E64 string=0x00000000002A1E68 ""
 *   insn=0x00000000002A1E6C string=0x00000000002A1E9C ""
 *   insn=0x00000000002A1E74 string=0x00000000002A1E78 ")""
 *   insn=0x00000000002A1E74 string=0x00000000002A1EB0 ")""
 *   insn=0x00000000002A1E7C string=0x00000000002A1E80 ")"
 *   insn=0x00000000002A1E80 string=0x00000000002A1E84 "_"
 *   insn=0x00000000002A1E84 string=0x00000000002A1E88 ")"
 *   insn=0x00000000002A1E88 string=0x00000000002A1E8C "*"
 *   insn=0x00000000002A1E8C string=0x00000000002A1E90 "L"
 *   insn=0x00000000002A1E9C string=0x00000000002A1EA0 ""
 *   insn=0x00000000002A1EA8 string=0x00000000002A1EAC "h"
 *   insn=0x00000000002A1EB4 string=0x00000000002A1EB8 ")"
 *   insn=0x00000000002A1EC0 string=0x00000000002A1EC4 ")"
 *   insn=0x00000000002A1EC4 string=0x00000000002A1EC8 "+"
 *   insn=0x00000000002A1EC8 string=0x00000000002A1ECC "l@"
 *   insn=0x00000000002A1ED4 string=0x00000000002A1ED8 "k"
 *   insn=0x00000000002A1EDC string=0x00000000002A1EE0 "j"
 *   insn=0x00000000002A1EE0 string=0x00000000002A1EE4 "k"
 *   insn=0x00000000002A1EE4 string=0x00000000002A1EE8 ""
 *   insn=0x00000000002A1EE8 string=0x00000000002A1EEC "("
 *   insn=0x00000000002A1EEC string=0x00000000002A1EF0 "h"
 *   insn=0x00000000002A1EF4 string=0x00000000002A1EF8 ")""
 *   insn=0x00000000002A1EFC string=0x00000000002A1F00 ")"
 *   insn=0x00000000002A1F04 string=0x00000000002A1F08 ")"
 *   insn=0x00000000002A1F08 string=0x00000000002A1F0C "("
 *   insn=0x00000000002A1F0C string=0x00000000002A1F10 ""
 *   insn=0x00000000002A1F10 string=0x00000000002A1F14 "\t"
 *   insn=0x00000000002A1F14 string=0x00000000002A1F18 ""
 *   insn=0x00000000002A1F18 string=0x00000000002A1F1C "iV"
 *   insn=0x00000000002A1F1C string=0x00000000002A1F20 "h"
 *   insn=0x00000000002A1F4C string=0x00000000002A1F50 "("
 *   insn=0x00000000002A1F58 string=0x00000000002A1F5C "M`"
 *   insn=0x00000000002A1F5C string=0x00000000001FA090 "0'"
 *   insn=0x00000000002A1F60 string=0x00000000002A1F64 "`2"
 *   insn=0x00000000002A1F68 string=0x00000000002A1F6C "("
 *   insn=0x00000000002A1F70 string=0x00000000002A1F74 "i"
 *   insn=0x00000000002A1F7C string=0x00000000002A1F80 "i"
 *   insn=0x00000000002A1F8C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::FireEmitterComponent::LoadFromProtobufMessage(
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
  __int64 v12; // x9
  __int64 v13; // x10
  _DWORD *v14; // x12
  int v15; // w10
  __int64 v16; // x11
  int v17; // w11
  int v18; // w12
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 *v21; // x9
  __int64 v22; // x8
  __int128 v23; // [xsp+8h] [xbp-38h] BYREF
  __int64 v24; // [xsp+18h] [xbp-28h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage((Caver::Component *)this, a2);
  result = (__int64 *)google::protobuf::internal::ExtensionSet::GetMessage(
                        (const Caver::Proto::Component *)((char *)a2 + 8),
                        Caver::Proto::FireEmitterComponent::extension,
                        (const google::protobuf::MessageLite *)qword_6E95D0);
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
  v9 = *((_DWORD *)v6 + 4);
  if ( *((_DWORD *)this + 36) == v9
    || (result = this[19], *((_DWORD *)this + 36) = v9, this[19] = 0, !result)
    || (v10 = *((_DWORD *)result + 2) - 1, (*((_DWORD *)result + 2) = v10) != 0) )
  {
    v11 = *((_DWORD *)v6 + 16);
    if ( (v11 & 4) == 0 )
    {
LABEL_9:
      v12 = Caver::Proto::FireEmitterComponent::default_instance_;
      if ( v6[4] )
        v13 = (__int64)v6;
      else
        v13 = Caver::Proto::FireEmitterComponent::default_instance_;
      v14 = *(_DWORD **)(v13 + 32);
      v15 = v14[5];
      goto LABEL_18;
    }
  }
  else
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    v11 = *((_DWORD *)v6 + 16);
    if ( (v11 & 4) == 0 )
      goto LABEL_9;
  }
  v15 = 0;
  v12 = Caver::Proto::FireEmitterComponent::default_instance_;
  if ( v6[3] )
    v16 = (__int64)v6;
  else
    v16 = Caver::Proto::FireEmitterComponent::default_instance_;
  v14 = *(_DWORD **)(v16 + 24);
LABEL_18:
  v17 = v14[3];
  v18 = v14[4];
  *((_DWORD *)this + 47) = v15;
  *((_DWORD *)this + 45) = v17;
  *((_DWORD *)this + 46) = v18;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v6[5] )
      v22 = (__int64)v6;
    else
      v22 = v12;
    result = Caver::FloatColorFromProtobufMessage((__int64 *)&v23, *(Caver **)(v22 + 40), v5);
    *((_OWORD *)this + 12) = v23;
    v11 = *((_DWORD *)v6 + 16);
    if ( (v11 & 0x20) == 0 )
    {
LABEL_20:
      if ( (v11 & 0x40) == 0 )
        goto LABEL_21;
      goto LABEL_32;
    }
  }
  else if ( (v11 & 0x20) == 0 )
  {
    goto LABEL_20;
  }
  *((_DWORD *)this + 40) = *((_DWORD *)v6 + 12);
  if ( (v11 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v11 & 0x80) == 0 )
      return result;
    goto LABEL_22;
  }
LABEL_32:
  *((_DWORD *)this + 41) = *((_DWORD *)v6 + 13);
  if ( (v11 & 0x80) == 0 )
    return result;
LABEL_22:
  if ( v6[7] )
    v19 = (__int64)v6;
  else
    v19 = Caver::Proto::FireEmitterComponent::default_instance_;
  v20 = *(_QWORD *)(v19 + 56);
  v21 = *(__int64 **)(v20 + 12);
  LODWORD(v20) = *(_DWORD *)(v20 + 20);
  this[21] = v21;
  *((_DWORD *)this + 44) = v20;
  return result;
}

