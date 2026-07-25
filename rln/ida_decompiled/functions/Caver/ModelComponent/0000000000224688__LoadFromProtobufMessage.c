/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000224688
 * Mangled: _ZN5Caver14ModelComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x000000000022469C string=0x00000000002246A0 "V"
 *   insn=0x00000000002246B0 string=0x00000000002246B4 "cX"
 *   insn=0x00000000002246B4 string=0x00000000002246B8 "&"
 *   insn=0x00000000002246B4 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002246B8 string=0x00000000002246BC ""
 *   insn=0x00000000002246DC string=0x00000000002246E0 "`"
 *   insn=0x0000000000224700 string=0x0000000000224704 "("
 *   insn=0x0000000000224704 string=0x0000000000224708 "@"
 *   insn=0x0000000000224708 string=0x000000000022470C "\t"
 *   insn=0x000000000022470C string=0x0000000000224710 ""
 *   insn=0x000000000022471C string=0x0000000000583734 "o"
 *   insn=0x0000000000224720 string=0x0000000000224724 "!"
 *   insn=0x0000000000224728 string=0x000000000022472C "\tF"
 *   insn=0x000000000022472C string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000224730 string=0x0000000000224734 ""
 *   insn=0x0000000000224754 string=0x0000000000224758 "("
 *   insn=0x0000000000224760 string=0x0000000000224764 "KV"
 *   insn=0x0000000000224764 string=0x00000000001FA090 "0'"
 *   insn=0x000000000022476C string=0x0000000000224770 "r"
 *   insn=0x0000000000224784 string=0x0000000000224788 "H"
 *   insn=0x0000000000224794 string=0x0000000000224798 "("
 *   insn=0x00000000002247A0 string=0x00000000002247A4 ";V"
 *   insn=0x00000000002247A8 string=0x00000000002247AC "`*"
 *   insn=0x00000000002247D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ModelComponent::LoadFromProtobufMessage(
        Caver::ModelComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9
  const Caver::Proto::FloatColor *v8; // x1
  __int64 v9; // x8
  const Caver::Proto::FloatColor *v10; // x1
  long double result; // q0
  __int64 v12; // x8
  long double v13; // [xsp+0h] [xbp-50h] BYREF
  int v14; // [xsp+14h] [xbp-3Ch]
  __int64 v15; // [xsp+18h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::ModelComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9308);
  if ( (*(_BYTE *)(Message + 72) & 1) != 0 )
    sub_56A6A8((char *)this + 112);
  if ( *(_QWORD *)(Message + 24) )
    v5 = Message;
  else
    v5 = Caver::Proto::ModelComponent::default_instance_;
  v6 = *(_QWORD *)(v5 + 24);
  v7 = *(_QWORD *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 20);
  *(_QWORD *)((char *)this + 196) = v7;
  *((_DWORD *)this + 51) = v6;
  *((_BYTE *)this + 192) = (Caver::Vector3::IsClose(
                              (Caver::ModelComponent *)((char *)this + 196),
                              (const Caver::Vector3 *)&Caver::Vector3Zero,
                              0.001)
                          & 1) == 0;
  *((_QWORD *)this + 26) = *(_QWORD *)(Message + 32);
  *((_DWORD *)this + 38) = *(_DWORD *)(Message + 40);
  if ( *(_QWORD *)(Message + 48) )
    v9 = Message;
  else
    v9 = Caver::Proto::ModelComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *(Caver **)(v9 + 48), v8);
  Caver::Color::FromFloatColor();
  *(_DWORD *)((char *)this + 314) = v14;
  *((_BYTE *)this + 156) = *(_BYTE *)(Message + 56);
  if ( (*(_BYTE *)(Message + 72) & 0x80) != 0 )
  {
    if ( *(_QWORD *)(Message + 64) )
      v12 = Message;
    else
      v12 = Caver::Proto::ModelComponent::default_instance_;
    Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *(Caver **)(v12 + 64), v10);
    result = v13;
    *((long double *)this + 10) = v13;
  }
  return result;
}

