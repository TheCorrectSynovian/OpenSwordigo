/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC9EC
 * Mangled: _ZN5Caver20WeaponTrailComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 27
 *   insn=0x00000000002CC9FC string=0x00000000002CCA00 "U"
 *   insn=0x00000000002CCA14 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002CCA18 string=0x00000000002CCA1C ""
 *   insn=0x00000000002CCA2C string=0x00000000002CCA30 "`@9H"
 *   insn=0x00000000002CCA30 string=0x00000000002CCA34 "H"
 *   insn=0x00000000002CCA38 string=0x00000000002CCA3C "@"
 *   insn=0x00000000002CCA3C string=0x00000000002CCA40 ")"
 *   insn=0x00000000002CCA44 string=0x00000000002CCA48 ")"
 *   insn=0x00000000002CCA48 string=0x00000000002CCA4C "("
 *   insn=0x00000000002CCA58 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002CCA60 string=0x00000000002CCA64 "K"
 *   insn=0x00000000002CCA7C string=0x00000000002CCA80 "d"
 *   insn=0x00000000002CCA84 string=0x00000000002CCA88 "!"
 *   insn=0x00000000002CCA88 string=0x00000000002CCA8C "B"
 *   insn=0x00000000002CCA8C string=0x00000000002CCA90 "c"
 *   insn=0x00000000002CCA94 string=0x00000000002CCA98 "!"
 *   insn=0x00000000002CCA98 string=0x00000000002CCA9C "B"
 *   insn=0x00000000002CCA9C string=0x00000000002CCAA0 "c"
 *   insn=0x00000000002CCAA4 string=0x00000000002CCAA8 "`"
 *   insn=0x00000000002CCAA8 string=0x00000000002CCAAC " %"
 *   insn=0x00000000002CCAAC string=0x00000000002CCAB0 "f"
 *   insn=0x00000000002CCAB8 string=0x00000000002CCABC "b"
 *   insn=0x00000000002CCABC string=0x00000000002CCAC0 "E&"
 *   insn=0x00000000002CCAC0 string=0x00000000002CCAC4 "a!"
 *   insn=0x00000000002CCACC string=0x00000000002CCAD0 "0"
 *   insn=0x00000000002CCAD4 string=0x00000000002CCAD8 "hz"
 *   insn=0x00000000002CCB00 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponTrailComponent::LoadFromProtobufMessage(
        Caver::WeaponTrailComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  const Caver::Proto::FloatColor *v5; // x1
  __int64 v6; // x8
  unsigned int v7; // s0
  unsigned int v8; // s1
  unsigned int v9; // s2
  unsigned int v10; // s3
  float v11; // s5
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  float v16; // s4
  float v17; // s0
  float v18; // s1
  float v19; // s6
  __int64 v20; // [xsp+8h] [xbp-58h] BYREF
  char v21; // [xsp+18h] [xbp-48h]
  char v22; // [xsp+19h] [xbp-47h]
  char v23; // [xsp+1Ah] [xbp-46h]
  char v24; // [xsp+1Bh] [xbp-45h]
  float v25; // [xsp+20h] [xbp-40h]
  float v26; // [xsp+24h] [xbp-3Ch]
  float v27; // [xsp+28h] [xbp-38h]
  float v28; // [xsp+2Ch] [xbp-34h]
  int v29; // [xsp+34h] [xbp-2Ch]
  __int64 v30; // [xsp+38h] [xbp-28h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::WeaponTrailComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9740);
  if ( (*(_BYTE *)(Message + 24) & 1) != 0 )
  {
    if ( *(_QWORD *)(Message + 16) )
      v6 = Message;
    else
      v6 = Caver::Proto::WeaponTrailComponent::default_instance_;
    Caver::FloatColorFromProtobufMessage(&v20, *(Caver **)(v6 + 16), v5);
    Caver::Color::FromFloatColor();
    LOBYTE(v7) = v21;
    LOBYTE(v8) = v22;
    LOBYTE(v9) = v23;
    LOBYTE(v10) = v24;
    v11 = *((float *)this + 49);
    v12 = (float)v7 / 255.0;
    v13 = (float)v8 / 255.0;
    v14 = (float)v9 / 255.0;
    v15 = (float)v10 / 255.0;
    v16 = v12 * *((float *)this + 48);
    *((float *)this + 44) = v12;
    *((float *)this + 45) = v13;
    v17 = v13 * v11;
    v19 = *((float *)this + 50);
    v18 = *((float *)this + 51);
    *((float *)this + 46) = v14;
    *((float *)this + 47) = v15;
    v25 = v16;
    v26 = v17;
    v27 = v14 * v19;
    v28 = v15 * v18;
    Caver::Color::FromFloatColor();
    *((_DWORD *)this + 30) = v29;
  }
}

