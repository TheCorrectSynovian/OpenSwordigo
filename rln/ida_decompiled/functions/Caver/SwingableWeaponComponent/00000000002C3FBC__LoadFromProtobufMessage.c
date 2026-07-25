/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C3FBC
 * Mangled: _ZN5Caver24SwingableWeaponComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SwingableWeaponComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 92
 *   insn=0x00000000002C3FCC string=0x00000000002C3FD0 "U"
 *   insn=0x00000000002C3FE4 string=0x00000000002C3FE8 "!"
 *   insn=0x00000000002C3FE4 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002C3FE8 string=0x00000000002C3FEC ""
 *   insn=0x00000000002C3FF8 string=0x00000000002C3FFC "e"
 *   insn=0x00000000002C4004 string=0x00000000002C4008 "i"
 *   insn=0x00000000002C4008 string=0x00000000002C400C "?"
 *   insn=0x00000000002C4010 string=0x00000000002C4014 "`F@"
 *   insn=0x00000000002C4014 string=0x00000000002C4018 "h"
 *   insn=0x00000000002C4020 string=0x00000000002C4024 "@"
 *   insn=0x00000000002C4024 string=0x00000000002C4028 ""
 *   insn=0x00000000002C4028 string=0x00000000002C402C ""
 *   insn=0x00000000002C4030 string=0x00000000002C4034 ""
 *   insn=0x00000000002C4034 string=0x00000000002C4038 ""
 *   insn=0x00000000002C4040 string=0x00000000002C4044 "i"
 *   insn=0x00000000002C4044 string=0x00000000002C4048 "?"
 *   insn=0x00000000002C404C string=0x00000000002C4050 "`R@"
 *   insn=0x00000000002C4050 string=0x00000000002C4054 "h"
 *   insn=0x00000000002C405C string=0x00000000002C4060 "@"
 *   insn=0x00000000002C4060 string=0x00000000002C4064 ""
 *   insn=0x00000000002C4064 string=0x00000000002C4068 ""
 *   insn=0x00000000002C406C string=0x00000000002C4070 ""
 *   insn=0x00000000002C4070 string=0x00000000002C4074 ""
 *   insn=0x00000000002C407C string=0x00000000002C4080 "H"
 *   insn=0x00000000002C4088 string=0x00000000002C408C ""
 *   insn=0x00000000002C408C string=0x00000000002C4090 "h"
 *   insn=0x00000000002C408C string=0x00000000002C424C "\t!"
 *   insn=0x00000000002C4094 string=0x00000000002C4098 "h"
 *   insn=0x00000000002C409C string=0x00000000002C40A0 "i"
 *   insn=0x00000000002C40A0 string=0x00000000002C40A4 "?"
 *   insn=0x00000000002C40A8 string=0x00000000002C40AC "`n@"
 *   insn=0x00000000002C40AC string=0x00000000002C40B0 "h"
 *   insn=0x00000000002C40B8 string=0x00000000002C40BC "@"
 *   insn=0x00000000002C40BC string=0x00000000002C40C0 ""
 *   insn=0x00000000002C40C0 string=0x00000000002C40C4 ""
 *   insn=0x00000000002C40C8 string=0x00000000002C40CC ""
 *   insn=0x00000000002C40CC string=0x00000000002C40D0 ""
 *   insn=0x00000000002C40D8 string=0x00000000002C40DC "i"
 *   insn=0x00000000002C40DC string=0x00000000002C40E0 "?"
 *   insn=0x00000000002C40E4 string=0x00000000002C40E8 "`z@"
 *   insn=0x00000000002C40E8 string=0x00000000002C40EC "h"
 *   insn=0x00000000002C40F4 string=0x00000000002C40F8 "@"
 *   insn=0x00000000002C40F8 string=0x00000000002C40FC ""
 *   insn=0x00000000002C40FC string=0x00000000002C4100 ""
 *   insn=0x00000000002C4104 string=0x00000000002C4108 ""
 *   insn=0x00000000002C4108 string=0x00000000002C410C ""
 *   insn=0x00000000002C4114 string=0x00000000002C4118 "i"
 *   insn=0x00000000002C4118 string=0x00000000002C411C "?"
 *   insn=0x00000000002C4120 string=0x00000000002C4124 "`"
 *   insn=0x00000000002C4124 string=0x00000000002C4128 "h"
 *   insn=0x00000000002C4130 string=0x00000000002C4134 "@"
 *   insn=0x00000000002C4134 string=0x00000000002C4138 ""
 *   insn=0x00000000002C4138 string=0x00000000002C413C ""
 *   insn=0x00000000002C4140 string=0x00000000002C4144 ""
 *   insn=0x00000000002C4144 string=0x00000000002C4148 ""
 *   insn=0x00000000002C4150 string=0x00000000002C4154 "i"
 *   insn=0x00000000002C4154 string=0x00000000002C4158 "?"
 *   insn=0x00000000002C415C string=0x00000000002C4160 "`"
 *   insn=0x00000000002C4160 string=0x00000000002C4164 "h"
 *   insn=0x00000000002C416C string=0x00000000002C4170 "@"
 *   insn=0x00000000002C4170 string=0x00000000002C4174 ""
 *   insn=0x00000000002C4174 string=0x00000000002C4178 ""
 *   insn=0x00000000002C417C string=0x00000000002C4180 ""
 *   insn=0x00000000002C4180 string=0x00000000002C4184 ""
 *   insn=0x00000000002C418C string=0x00000000002C4190 "i2A"
 *   insn=0x00000000002C4190 string=0x00000000002C4194 "?"
 *   insn=0x00000000002C4198 string=0x00000000002C419C "`"
 *   insn=0x00000000002C419C string=0x00000000002C41A0 "h2"
 *   insn=0x00000000002C41A8 string=0x00000000002C41AC "@"
 *   insn=0x00000000002C41AC string=0x00000000002C41B0 ""
 *   insn=0x00000000002C41B0 string=0x00000000002C41B4 ""
 *   insn=0x00000000002C41B8 string=0x00000000002C41BC ""
 *   insn=0x00000000002C41BC string=0x00000000002C41C0 ""
 *   insn=0x00000000002C41C8 string=0x00000000002C41CC "iJA"
 *   insn=0x00000000002C41CC string=0x00000000002C41D0 "?"
 *   insn=0x00000000002C41D4 string=0x00000000002C41D8 "`"
 *   insn=0x00000000002C41D8 string=0x00000000002C41DC "hJ"
 *   insn=0x00000000002C41E4 string=0x00000000002C41E8 "@"
 *   insn=0x00000000002C41E8 string=0x00000000002C41EC ""
 *   insn=0x00000000002C41EC string=0x00000000002C41F0 ""
 *   insn=0x00000000002C41F4 string=0x00000000002C41F8 ""
 *   insn=0x00000000002C41F8 string=0x00000000002C41FC ""
 *   insn=0x00000000002C4228 string=0x00000000002C422C "i"
 *   insn=0x00000000002C4234 string=0x00000000002C4238 "i"
 *   insn=0x00000000002C4240 string=0x00000000002C4244 "i"
 *   insn=0x00000000002C4244 string=0x00000000002C4248 "H"
 *   insn=0x00000000002C4250 string=0x00000000002C4254 ")"
 *   insn=0x00000000002C4258 string=0x00000000002C425C ")"
 *   insn=0x00000000002C425C string=0x00000000002C4260 "("
 *   insn=0x00000000002C426C string=0x00000000001FA090 "0'"
 *   insn=0x00000000002C4270 string=0x00000000002C4274 "h"
 *   insn=0x00000000002C4288 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::SwingableWeaponComponent::LoadFromProtobufMessage(
        Caver::SwingableWeaponComponent *this,
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
  int v14; // w8
  int v15; // w8
  int v16; // w8
  int v17; // w8
  int v18; // w8
  int v19; // w8
  int v20; // w8
  int v21; // w8
  int v22; // w8
  int v23; // w8
  __int64 v24; // x8
  __int128 v25; // [xsp+8h] [xbp-38h] BYREF
  __int64 v26; // [xsp+18h] [xbp-28h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (__int64 *)google::protobuf::internal::ExtensionSet::GetMessage(
                        (const Caver::Proto::Component *)((char *)a2 + 8),
                        Caver::Proto::SwingableWeaponComponent::extension,
                        (const google::protobuf::MessageLite *)qword_6E96F0);
  v6 = result;
  v7 = *((_DWORD *)result + 3);
  if ( *((_DWORD *)this + 32) != v7 )
  {
    result = (__int64 *)*((_QWORD *)this + 17);
    *((_DWORD *)this + 32) = v7;
    *((_QWORD *)this + 17) = 0;
    if ( result )
    {
      v8 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v8;
      if ( !v8 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v9 = *((_DWORD *)v6 + 4);
  if ( *((_DWORD *)this + 38) != v9 )
  {
    result = (__int64 *)*((_QWORD *)this + 20);
    *((_DWORD *)this + 38) = v9;
    *((_QWORD *)this + 20) = 0;
    if ( result )
    {
      v10 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v10;
      if ( !v10 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v11 = *((_DWORD *)v6 + 17);
  if ( (v11 & 4) != 0 )
  {
    *((_DWORD *)this + 103) = *((_DWORD *)v6 + 5);
    if ( (v11 & 8) == 0 )
    {
LABEL_11:
      if ( (v11 & 0x10) == 0 )
        goto LABEL_12;
      goto LABEL_42;
    }
  }
  else if ( (v11 & 8) == 0 )
  {
    goto LABEL_11;
  }
  *((_DWORD *)this + 104) = *((_DWORD *)v6 + 6);
  if ( (v11 & 0x10) == 0 )
  {
LABEL_12:
    if ( (v11 & 0x20) == 0 )
      goto LABEL_13;
LABEL_43:
    if ( v6[4] )
      v24 = (__int64)v6;
    else
      v24 = Caver::Proto::SwingableWeaponComponent::default_instance_;
    result = Caver::FloatColorFromProtobufMessage((__int64 *)&v25, *(Caver **)(v24 + 32), v5);
    *(_OWORD *)((char *)this + 424) = v25;
    if ( (*((_DWORD *)v6 + 17) & 0x40) != 0 )
      goto LABEL_14;
    goto LABEL_15;
  }
LABEL_42:
  *((_DWORD *)this + 105) = *((_DWORD *)v6 + 7);
  if ( (v11 & 0x20) != 0 )
    goto LABEL_43;
LABEL_13:
  if ( (v11 & 0x40) != 0 )
LABEL_14:
    *((_DWORD *)this + 111) = *((_DWORD *)v6 + 10);
LABEL_15:
  v12 = *((_DWORD *)v6 + 11);
  if ( *((_DWORD *)this + 52) != v12 )
  {
    result = (__int64 *)*((_QWORD *)this + 27);
    *((_DWORD *)this + 52) = v12;
    *((_QWORD *)this + 27) = 0;
    if ( result )
    {
      v13 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v13;
      if ( !v13 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v14 = *((_DWORD *)v6 + 12);
  if ( *((_DWORD *)this + 58) != v14 )
  {
    result = (__int64 *)*((_QWORD *)this + 30);
    *((_DWORD *)this + 58) = v14;
    *((_QWORD *)this + 30) = 0;
    if ( result )
    {
      v15 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v15;
      if ( !v15 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v16 = *((_DWORD *)v6 + 13);
  if ( *((_DWORD *)this + 64) != v16 )
  {
    result = (__int64 *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 64) = v16;
    *((_QWORD *)this + 33) = 0;
    if ( result )
    {
      v17 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v17;
      if ( !v17 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v18 = *((_DWORD *)v6 + 14);
  if ( *((_DWORD *)this + 70) != v18 )
  {
    result = (__int64 *)*((_QWORD *)this + 36);
    *((_DWORD *)this + 70) = v18;
    *((_QWORD *)this + 36) = 0;
    if ( result )
    {
      v19 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v19;
      if ( !v19 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v20 = *((_DWORD *)v6 + 15);
  if ( *((_DWORD *)this + 76) != v20 )
  {
    result = (__int64 *)*((_QWORD *)this + 39);
    *((_DWORD *)this + 76) = v20;
    *((_QWORD *)this + 39) = 0;
    if ( result )
    {
      v21 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v21;
      if ( !v21 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  v22 = *((_DWORD *)v6 + 16);
  if ( *((_DWORD *)this + 82) != v22 )
  {
    result = (__int64 *)*((_QWORD *)this + 42);
    *((_DWORD *)this + 82) = v22;
    *((_QWORD *)this + 42) = 0;
    if ( result )
    {
      v23 = *((_DWORD *)result + 2) - 1;
      *((_DWORD *)result + 2) = v23;
      if ( !v23 )
        return (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
    }
  }
  return result;
}

