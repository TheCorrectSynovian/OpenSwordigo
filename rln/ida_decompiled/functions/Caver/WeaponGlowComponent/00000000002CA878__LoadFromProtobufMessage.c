/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA878
 * Mangled: _ZN5Caver19WeaponGlowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64B0  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 30
 *   insn=0x00000000002CA888 string=0x00000000002CA88C "U"
 *   insn=0x00000000002CA8A0 string=0x00000000001F64B0 "0'"
 *   insn=0x00000000002CA8A4 string=0x00000000002CA8A8 ""
 *   insn=0x00000000002CA8B4 string=0x00000000002CA8B8 "6"
 *   insn=0x00000000002CA8C0 string=0x00000000002CA8C4 "i"
 *   insn=0x00000000002CA8C4 string=0x00000000002CA8C8 "?"
 *   insn=0x00000000002CA8CC string=0x00000000002CA8D0 "`N@"
 *   insn=0x00000000002CA8D0 string=0x00000000002CA8D4 "h"
 *   insn=0x00000000002CA8DC string=0x00000000002CA8E0 "@"
 *   insn=0x00000000002CA8E0 string=0x00000000002CA8E4 ""
 *   insn=0x00000000002CA8E4 string=0x00000000002CA8E8 ""
 *   insn=0x00000000002CA8EC string=0x00000000002CA8F0 ""
 *   insn=0x00000000002CA8F0 string=0x00000000002CA8F4 ""
 *   insn=0x00000000002CA900 string=0x00000000002CA904 "H"
 *   insn=0x00000000002CA904 string=0x00000000002CA908 "h"
 *   insn=0x00000000002CA90C string=0x00000000002CA910 "h"
 *   insn=0x00000000002CA920 string=0x00000000002CA9B0 "H"
 *   insn=0x00000000002CA93C string=0x00000000002CA940 ")MC"
 *   insn=0x00000000002CA944 string=0x00000000002CA948 ")"
 *   insn=0x00000000002CA948 string=0x00000000002CA94C "("
 *   insn=0x00000000002CA958 string=0x00000000001FA090 "0'"
 *   insn=0x00000000002CA95C string=0x00000000002CA960 "`B"
 *   insn=0x00000000002CA964 string=0x00000000002CA968 ""
 *   insn=0x00000000002CA970 string=0x00000000002CA974 ")MC"
 *   insn=0x00000000002CA978 string=0x00000000002CA97C ")"
 *   insn=0x00000000002CA97C string=0x00000000002CA980 "("
 *   insn=0x00000000002CA994 string=0x00000000002CA998 "~"
 *   insn=0x00000000002CA99C string=0x00000000002CA9A0 "h"
 *   insn=0x00000000002CA9A4 string=0x00000000002CA9A8 "("
 *   insn=0x00000000002CA9B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::LoadFromProtobufMessage(
        Caver::WeaponGlowComponent *this,
        const Caver::Proto::Component *a2)
{
  const Caver::Proto::FloatColor *v4; // x1
  __int64 Message; // x20
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  int v9; // w8
  __int64 v10; // x8
  __int64 v11; // x8
  int v12; // [xsp+4h] [xbp-3Ch]
  __int128 v13; // [xsp+8h] [xbp-38h] BYREF
  __int64 v14; // [xsp+18h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::WeaponGlowComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9730);
  v6 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 36) != v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v6;
    *((_QWORD *)this + 19) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v9 = *(_DWORD *)(Message + 36);
  if ( (v9 & 2) != 0 )
  {
    if ( *(_QWORD *)(Message + 16) )
      v10 = Message;
    else
      v10 = Caver::Proto::WeaponGlowComponent::default_instance_;
    Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *(Caver **)(v10 + 16), v4);
    *(_OWORD *)((char *)this + 164) = v13;
    v9 = *(_DWORD *)(Message + 36);
    if ( (v9 & 4) == 0 )
    {
LABEL_7:
      if ( (v9 & 8) == 0 )
        return;
      goto LABEL_8;
    }
  }
  else if ( (v9 & 4) == 0 )
  {
    goto LABEL_7;
  }
  if ( *(_QWORD *)(Message + 24) )
    v11 = Message;
  else
    v11 = Caver::Proto::WeaponGlowComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *(Caver **)(v11 + 24), v4);
  Caver::Color::FromFloatColor();
  *((_DWORD *)this + 45) = v12;
  if ( (*(_DWORD *)(Message + 36) & 8) != 0 )
LABEL_8:
    *((_DWORD *)this + 61) = *(_DWORD *)(Message + 32);
}

