/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C20C0
 * Mangled: _ZN5Caver18WaterMeshComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::WaterMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 31
 *   insn=0x00000000002C20D0 string=0x00000000002C20D4 "U"
 *   insn=0x00000000002C20E8 string=0x00000000002C20EC "(!"
 *   insn=0x00000000002C20E8 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002C20EC string=0x00000000002C20F0 ""
 *   insn=0x00000000002C20FC string=0x00000000002C2100 "$"
 *   insn=0x00000000002C2108 string=0x00000000002C210C "iz@"
 *   insn=0x00000000002C210C string=0x00000000002C2110 "?"
 *   insn=0x00000000002C2114 string=0x00000000002C2118 "`B@"
 *   insn=0x00000000002C2118 string=0x00000000002C211C "hz"
 *   insn=0x00000000002C2124 string=0x00000000002C2128 "@"
 *   insn=0x00000000002C2128 string=0x00000000002C212C ""
 *   insn=0x00000000002C212C string=0x00000000002C2130 ""
 *   insn=0x00000000002C2134 string=0x00000000002C2138 ""
 *   insn=0x00000000002C2138 string=0x00000000002C213C ""
 *   insn=0x00000000002C2144 string=0x00000000002C2148 "i"
 *   insn=0x00000000002C2148 string=0x00000000002C214C "?"
 *   insn=0x00000000002C2150 string=0x00000000002C2154 "`V@"
 *   insn=0x00000000002C2150 string=0x00000000002C2180 "6!"
 *   insn=0x00000000002C2154 string=0x00000000002C2158 "h"
 *   insn=0x00000000002C2160 string=0x00000000002C2164 "@"
 *   insn=0x00000000002C2164 string=0x00000000002C2168 ""
 *   insn=0x00000000002C2168 string=0x00000000002C216C ""
 *   insn=0x00000000002C2170 string=0x00000000002C2174 ""
 *   insn=0x00000000002C2174 string=0x00000000002C2178 ""
 *   insn=0x00000000002C2190 string=0x00000000002C2194 "("
 *   insn=0x00000000002C21A0 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002C21A4 string=0x00000000002C21A8 "`."
 *   insn=0x00000000002C21B4 string=0x00000000002C21B8 "("
 *   insn=0x00000000002C21C8 string=0x00000000002C21CC "`2"
 *   insn=0x00000000002C21DC string=0x00000000002C21F4 "7"
 *   insn=0x00000000002C21F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::WaterMeshComponent::LoadFromProtobufMessage(
        Caver::WaterMeshComponent *this,
        const Caver::Proto::Component *a2)
{
  const Caver::Proto::FloatColor *v4; // x1
  __int64 Message; // x20
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  int v9; // w8
  _DWORD *v10; // x0
  int v11; // w8
  __int64 v12; // x8
  const Caver::Proto::FloatColor *v13; // x1
  __int64 v14; // x8
  long double result; // q0
  long double v16; // [xsp+8h] [xbp-38h] BYREF
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::WaterMeshComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E93A8);
  v6 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 30) != v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 16) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v9 = *(_DWORD *)(Message + 16);
  if ( *((_DWORD *)this + 40) != v9 )
  {
    v10 = (_DWORD *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 40) = v9;
    *((_QWORD *)this + 21) = 0;
    if ( v10 )
    {
      v11 = v10[2] - 1;
      v10[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( *(_QWORD *)(Message + 24) )
    v12 = Message;
  else
    v12 = Caver::Proto::WaterMeshComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v16, *(Caver **)(v12 + 24), v4);
  *((long double *)this + 11) = v16;
  if ( *(_QWORD *)(Message + 32) )
    v14 = Message;
  else
    v14 = Caver::Proto::WaterMeshComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v16, *(Caver **)(v14 + 32), v13);
  result = v16;
  *((long double *)this + 12) = v16;
  return result;
}

