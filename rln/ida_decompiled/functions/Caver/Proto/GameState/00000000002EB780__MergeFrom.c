/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EB780
 * Mangled: _ZN5Caver5Proto9GameState9MergeFromERKS1_
 * Demangled: Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callers: 1
 *   0x00000000001F5940  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callees: 15
 *   0x00000000001F3A60  Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6690  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC770  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *   0x00000000001FF870  Caver::Proto::PlayerProfile::MergeFrom(Caver::Proto::PlayerProfile const&)
 *   0x00000000001FFD10  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *   0x0000000000201960  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 168
 *   insn=0x00000000002EB790 string=0x00000000002EB794 "V"
 *   insn=0x00000000002EB7B0 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002EB7C0 string=0x00000000002EB7C4 "+"
 *   insn=0x00000000002EB7C4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002EB7C8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002EB7D4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002EB7DC string=0x00000000002EB7E0 "H;"
 *   insn=0x00000000002EB7E0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002EB7E8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002EB7EC string=0x00000000002EB7F0 "ab"
 *   insn=0x00000000002EB7F0 string=0x00000000002EB7F4 "[X"
 *   insn=0x00000000002EB7F8 string=0x00000000002EB7FC "a"
 *   insn=0x00000000002EB800 string=0x00000000001F6690 "0'"
 *   insn=0x00000000002EB804 string=0x00000000002EB808 "a"
 *   insn=0x00000000002EB808 string=0x00000000002EB80C "AQ"
 *   insn=0x00000000002EB80C string=0x00000000002EB810 "h"
 *   insn=0x00000000002EB818 string=0x00000000002EB81C ""
 *   insn=0x00000000002EB820 string=0x00000000002EB824 ""
 *   insn=0x00000000002EB824 string=0x00000000002EB828 "h 7"
 *   insn=0x00000000002EB82C string=0x00000000002EB830 "("
 *   insn=0x00000000002EB840 string=0x00000000002EB844 "H"
 *   insn=0x00000000002EB848 string=0x00000000002EB84C "h"
 *   insn=0x00000000002EB84C string=0x00000000002EB850 "("
 *   insn=0x00000000002EB860 string=0x00000000002EB864 ""
 *   insn=0x00000000002EB870 string=0x00000000002EB874 "['"
 *   insn=0x00000000002EB874 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EB878 string=0x00000000002EB87C "\t"
 *   insn=0x00000000002EB87C string=0x00000000002EB880 ""
 *   insn=0x00000000002EB884 string=0x00000000002EB888 "\t"
 *   insn=0x00000000002EB88C string=0x00000000002EB890 "\t4"
 *   insn=0x00000000002EB894 string=0x00000000002EB898 ")yC"
 *   insn=0x00000000002EB89C string=0x00000000002EB8A0 "\n0"
 *   insn=0x00000000002EB8A0 string=0x00000000002EB8A4 "\nx"
 *   insn=0x00000000002EB8A8 string=0x00000000002EB8AC "!"
 *   insn=0x00000000002EB8B0 string=0x00000000002EB8B4 "J"
 *   insn=0x00000000002EB8B4 string=0x00000000002EB8B8 ")u@"
 *   insn=0x00000000002EB8C4 string=0x00000000002EB8C8 " "
 *   insn=0x00000000002EB8CC string=0x00000000002EB8D0 "A"
 *   insn=0x00000000002EB8D4 string=0x00000000002EB8D8 ")"
 *   insn=0x00000000002EB8D8 string=0x00000000002EB8DC "J"
 *   insn=0x00000000002EB8E0 string=0x00000000002EB8E4 "A"
 *   insn=0x00000000002EB8E4 string=0x00000000002EB8E8 " "
 *   insn=0x00000000002EB8E8 string=0x00000000002EB8EC "A"
 *   insn=0x00000000002EB8F0 string=0x00000000002EB8F4 "J"
 *   insn=0x00000000002EB8F8 string=0x00000000002EB8FC "|"
 *   insn=0x00000000002EB8FC string=0x00000000002EB900 "A"
 *   insn=0x00000000002EB90C string=0x00000000002EB910 "h\n@"
 *   insn=0x00000000002EB910 string=0x00000000002EB914 ")"
 *   insn=0x00000000002EB918 string=0x00000000002EB91C ")"
 *   insn=0x00000000002EB91C string=0x00000000002EB920 "("
 *   insn=0x00000000002EB928 string=0x00000000002EB92C "h"
 *   insn=0x00000000002EB928 string=0x00000000001FC770 "0'"
 *   insn=0x00000000002EB93C string=0x00000000002EB940 "u*@"
 *   insn=0x00000000002EB940 string=0x00000000002EB944 ")"
 *   insn=0x00000000002EB944 string=0x00000000002EB948 ""
 *   insn=0x00000000002EB958 string=0x00000000002EB95C "!'"
 *   insn=0x00000000002EB960 string=0x00000000002EB964 ""
 *   insn=0x00000000002EB964 string=0x00000000002EB968 "a"
 *   insn=0x00000000002EB968 string=0x00000000002EB96C ""
 *   insn=0x00000000002EB974 string=0x00000000002EB978 "L"
 *   insn=0x00000000002EB978 string=0x00000000002EB97C "h"
 *   insn=0x00000000002EB97C string=0x00000000002EB980 "H"
 *   insn=0x00000000002EB98C string=0x00000000002EB990 "u.@"
 *   insn=0x00000000002EB990 string=0x00000000002EB994 ")"
 *   insn=0x00000000002EB994 string=0x00000000002EB998 ""
 *   insn=0x00000000002EB9A8 string=0x00000000002EB9AC "'"
 *   insn=0x00000000002EB9B0 string=0x00000000002EB9B4 ""
 *   insn=0x00000000002EB9B4 string=0x00000000002EB9B8 "a"
 *   insn=0x00000000002EB9B8 string=0x00000000002EB9BC ""
 *   insn=0x00000000002EB9C4 string=0x00000000002EB9C8 "8"
 *   insn=0x00000000002EB9C8 string=0x00000000002EB9CC "h"
 *   insn=0x00000000002EB9DC string=0x00000000002EB9E0 "u2@"
 *   insn=0x00000000002EB9E0 string=0x00000000002EB9E4 ")9C"
 *   insn=0x00000000002EB9E4 string=0x00000000002EB9E8 ""
 *   insn=0x00000000002EBA00 string=0x00000000002EBA04 ""
 *   insn=0x00000000002EBA04 string=0x00000000002EBA08 "a"
 *   insn=0x00000000002EBA08 string=0x00000000002EBA0C ""
 *   insn=0x00000000002EBA14 string=0x00000000002EBA18 "$"
 *   insn=0x00000000002EBA18 string=0x00000000002EBA1C "h"
 *   insn=0x00000000002EBA2C string=0x00000000002EBA30 "u6@"
 *   insn=0x00000000002EBA30 string=0x00000000002EBA34 ")"
 *   insn=0x00000000002EBA34 string=0x00000000002EBA38 ""
 *   insn=0x00000000002EBA50 string=0x00000000002EBA54 ""
 *   insn=0x00000000002EBA54 string=0x00000000002EBA58 "a"
 *   insn=0x00000000002EBA58 string=0x00000000002EBA5C ""
 *   insn=0x00000000002EBA68 string=0x00000000002EBA6C "h"
 *   insn=0x00000000002EBA6C string=0x00000000002EBA70 "("
 *   insn=0x00000000002EBA7C string=0x00000000002EBA80 "u:@"
 *   insn=0x00000000002EBA80 string=0x00000000002EBA84 ")UC"
 *   insn=0x00000000002EBA84 string=0x00000000002EBA88 ""
 *   insn=0x00000000002EBAA0 string=0x00000000002EBAA4 ""
 *   insn=0x00000000002EBAA4 string=0x00000000002EBAA8 "a"
 *   insn=0x00000000002EBAA8 string=0x00000000002EBAAC ""
 *   insn=0x00000000002EBAB8 string=0x00000000002EBABC "h"
 *   insn=0x00000000002EBACC string=0x00000000002EBAD0 "u>@"
 *   insn=0x00000000002EBAD0 string=0x00000000002EBAD4 ")"
 *   insn=0x00000000002EBAD4 string=0x00000000002EBAD8 ""
 *   insn=0x00000000002EBAF0 string=0x00000000002EBAF4 ""
 *   insn=0x00000000002EBAF4 string=0x00000000002EBAF8 "a"
 *   insn=0x00000000002EBAF8 string=0x00000000002EBAFC ""
 *   insn=0x00000000002EBB08 string=0x00000000002EBB0C "h"
 *   insn=0x00000000002EBB10 string=0x00000000002EBB14 "a"
 *   insn=0x00000000002EBB14 string=0x00000000002EBB18 "f"
 *   insn=0x00000000002EBB20 string=0x00000000002EBB24 ""
 *   insn=0x00000000002EBB38 string=0x00000000002EBB3C "IA"
 *   insn=0x00000000002EBB3C string=0x00000000002EBB40 "\t"
 *   insn=0x00000000002EBB44 string=0x00000000002EBB48 "\t|"
 *   insn=0x00000000002EBB48 string=0x00000000002EBB4C "A"
 *   insn=0x00000000002EBB54 string=0x00000000002EBB58 "\n "
 *   insn=0x00000000002EBB58 string=0x00000000002EBB5C ""
 *   insn=0x00000000002EBB64 string=0x00000000002EBB68 "h^@"
 *   insn=0x00000000002EBB68 string=0x00000000002EBB6C ")"
 *   insn=0x00000000002EBB70 string=0x00000000002EBB74 ")"
 *   insn=0x00000000002EBB74 string=0x00000000002EBB78 "("
 *   insn=0x00000000002EBB80 string=0x00000000002EBB84 "h"
 *   insn=0x00000000002EBB80 string=0x00000000001F3A60 "P'"
 *   insn=0x00000000002EBB84 string=0x00000000002EBB88 ""
 *   insn=0x00000000002EBB94 string=0x00000000002EBB98 "ub@"
 *   insn=0x00000000002EBB98 string=0x00000000002EBB9C ")aG"
 *   insn=0x00000000002EBB9C string=0x00000000002EBBA0 ""
 *   insn=0x00000000002EBBB8 string=0x00000000002EBBBC ""
 *   insn=0x00000000002EBBBC string=0x00000000002EBBC0 "a"
 *   insn=0x00000000002EBBC0 string=0x00000000002EBBC4 ""
 *   insn=0x00000000002EBBD0 string=0x00000000002EBBD4 "h"
 *   insn=0x00000000002EBBDC string=0x00000000002EBBE0 "i"C9"
 *   insn=0x00000000002EBBE0 string=0x00000000002EBBE4 ""
 *   insn=0x00000000002EBBEC string=0x00000000002EBBF0 "h"
 *   insn=0x00000000002EBBF8 string=0x00000000002EBBFC "i&C9"
 *   insn=0x00000000002EBBFC string=0x00000000002EBC00 ""
 *   insn=0x00000000002EBC08 string=0x00000000002EBC0C "h"
 *   insn=0x00000000002EBC0C string=0x00000000002EBC10 "("
 *   insn=0x00000000002EBC1C string=0x00000000002EBC20 "uj@"
 *   insn=0x00000000002EBC20 string=0x00000000002EBC24 ")"
 *   insn=0x00000000002EBC24 string=0x00000000002EBC28 ""
 *   insn=0x00000000002EBC38 string=0x00000000002EBC3C "i&"
 *   insn=0x00000000002EBC40 string=0x00000000002EBC44 ""
 *   insn=0x00000000002EBC44 string=0x00000000002EBC48 "a"
 *   insn=0x00000000002EBC48 string=0x00000000002EBC4C ""
 *   insn=0x00000000002EBC58 string=0x00000000002EBC5C "h"
 *   insn=0x00000000002EBC6C string=0x00000000002EBC70 "un@"
 *   insn=0x00000000002EBC70 string=0x00000000002EBC74 ")"
 *   insn=0x00000000002EBC74 string=0x00000000002EBC78 ""
 *   insn=0x00000000002EBC88 string=0x00000000002EBC8C "U&"
 *   insn=0x00000000002EBC90 string=0x00000000002EBC94 ""
 *   insn=0x00000000002EBC94 string=0x00000000002EBC98 "a"
 *   insn=0x00000000002EBC98 string=0x00000000002EBC9C ""
 *   insn=0x00000000002EBCA8 string=0x00000000002EBCAC "h"
 *   insn=0x00000000002EBCB0 string=0x00000000002EBCB4 "@"
 *   insn=0x00000000002EBCB4 string=0x00000000002EBCB8 "H"
 *   insn=0x00000000002EBCB8 string=0x00000000002EBCBC ""
 *   insn=0x00000000002EBCC8 string=0x00000000002EBCCC "inD9"
 *   insn=0x00000000002EBCCC string=0x00000000002EBCD0 ""
 *   insn=0x00000000002EBCE8 string=0x00000000002EBD58 "^)"
 *   insn=0x00000000002EBD00 string=0x00000000002EBD04 "ibD9"
 *   insn=0x00000000002EBD04 string=0x00000000002EBD08 ""
 *   insn=0x00000000002EBD10 string=0x00000000002EBD14 "h"
 *   insn=0x00000000002EBD14 string=0x00000000002EBD18 "H"
 *   insn=0x00000000002EBD1C string=0x00000000002EBD20 "ifD9"
 *   insn=0x00000000002EBD20 string=0x00000000002EBD24 ""
 *   insn=0x00000000002EBD2C string=0x00000000002EBD30 "h"
 *   insn=0x00000000002EBD38 string=0x00000000002EBD3C "ijD9"
 *   insn=0x00000000002EBD3C string=0x00000000002EBD40 ""
 *   insn=0x00000000002EBD48 string=0x00000000002EBD4C "h"
 *   insn=0x00000000002EBD58 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EBD60 string=0x00000000002EBD64 "#9"
 *   insn=0x00000000002EBD6C string=0x00000000002EBD70 "w"
 *   insn=0x00000000002EBD88 string=0x00000000002EBD8C "@"
 *   insn=0x00000000002EBD94 string=0x00000000002EBD98 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState *this, const Caver::Proto::GameState *a2)
{
  int v4; // w8
  __int64 v5; // x0
  __int128 v6; // q1
  __int128 v7; // q0
  const Caver::Proto::GameState *v8; // x8
  __int64 *v9; // x0
  __int64 *v10; // x0
  __int64 *v11; // x0
  __int64 *v12; // x0
  __int64 *v13; // x0
  __int64 *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x0
  char v18; // w9
  char v19; // w9
  __int64 *v20; // x0
  __int64 *v21; // x0
  char v22; // w9
  char v23; // w9
  char v24; // w9
  char v25; // w9
  _BYTE v26[32]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v27; // [xsp+48h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == this )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v26, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v26);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom();
  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom();
  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom();
  v4 = *((_DWORD *)a2 + 71);
  if ( !(_BYTE)v4 )
    goto LABEL_11;
  if ( (v4 & 1) != 0 )
  {
    v5 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 71) |= 1u;
    if ( !v5 )
    {
      v5 = operator new(0xD0u);
      *(_QWORD *)(v5 + 24) = 0;
      *(_QWORD *)(v5 + 32) = v5 + 56;
      *(_QWORD *)(v5 + 16) = 0;
      *(_QWORD *)(v5 + 104) = v5 + 128;
      *(_DWORD *)(v5 + 48) = 4;
      *(_DWORD *)(v5 + 120) = 4;
      *(_QWORD *)&v6 = &Caver::Proto::CharacterState::_default_equipped_weapon_;
      *(_QWORD *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 112) = 0;
      *(_QWORD *)&v7 = &Caver::Proto::CharacterState::_default_current_skill_;
      *((_QWORD *)&v6 + 1) = &Caver::Proto::CharacterState::_default_equipped_armor_;
      *(_OWORD *)(v5 + 88) = v6;
      *((_QWORD *)&v7 + 1) = &Caver::Proto::CharacterState::_default_weapon_trinket_;
      *(_QWORD *)&v6 = &Caver::Proto::CharacterState::_default_armor_trinket_;
      *(_QWORD *)(v5 + 192) = 0;
      *(_QWORD *)(v5 + 200) = 0;
      *(_QWORD *)v5 = off_6C70F0;
      *(_QWORD *)(v5 + 8) = 0;
      *((_QWORD *)&v6 + 1) = &Caver::Proto::CharacterState::_default_skill_trinket_;
      *(_OWORD *)(v5 + 160) = v7;
      *(_OWORD *)(v5 + 176) = v6;
      *((_QWORD *)this + 2) = v5;
    }
    if ( *((_QWORD *)a2 + 2) )
      v8 = a2;
    else
      v8 = (const Caver::Proto::GameState *)Caver::Proto::GameState::default_instance_;
    Caver::Proto::CharacterState::MergeFrom(
      (Caver::Proto::CharacterState *)v5,
      *((const Caver::Proto::CharacterState **)v8 + 2));
    v4 = *((_DWORD *)a2 + 71);
    if ( (v4 & 4) == 0 )
    {
LABEL_6:
      if ( (v4 & 8) == 0 )
        goto LABEL_7;
      goto LABEL_28;
    }
  }
  else if ( (v4 & 4) == 0 )
  {
    goto LABEL_6;
  }
  v9 = (__int64 *)*((_QWORD *)this + 10);
  *((_DWORD *)this + 71) |= 4u;
  if ( v9 == &Caver::Proto::GameState::_default_current_level_ )
  {
    v9 = (__int64 *)operator new(8u);
    *v9 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 10) = v9;
  }
  sub_56A6A8(v9);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 8) == 0 )
  {
LABEL_7:
    if ( (v4 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_31;
  }
LABEL_28:
  v10 = (__int64 *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 71) |= 8u;
  if ( v10 == &Caver::Proto::GameState::_default_current_spawn_point_ )
  {
    v10 = (__int64 *)operator new(8u);
    *v10 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 11) = v10;
  }
  sub_56A6A8(v10);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x10) == 0 )
  {
LABEL_8:
    if ( (v4 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_34;
  }
LABEL_31:
  v11 = (__int64 *)*((_QWORD *)this + 12);
  *((_DWORD *)this + 71) |= 0x10u;
  if ( v11 == &Caver::Proto::GameState::_default_previous_portal_level_ )
  {
    v11 = (__int64 *)operator new(8u);
    *v11 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 12) = v11;
  }
  sub_56A6A8(v11);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v4 & 0x40) == 0 )
      goto LABEL_10;
    goto LABEL_37;
  }
LABEL_34:
  v12 = (__int64 *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 71) |= 0x20u;
  if ( v12 == &Caver::Proto::GameState::_default_current_map_node_name_ )
  {
    v12 = (__int64 *)operator new(8u);
    *v12 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 13) = v12;
  }
  sub_56A6A8(v12);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x40) != 0 )
  {
LABEL_37:
    v13 = (__int64 *)*((_QWORD *)this + 14);
    *((_DWORD *)this + 71) |= 0x40u;
    if ( v13 == &Caver::Proto::GameState::_default_carried_object_template_ )
    {
      v13 = (__int64 *)operator new(8u);
      *v13 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 14) = v13;
    }
    sub_56A6A8(v13);
    v4 = *((_DWORD *)a2 + 71);
    if ( (v4 & 0x80) != 0 )
      goto LABEL_40;
LABEL_11:
    if ( (v4 & 0x1FE00) == 0 )
      goto LABEL_58;
    goto LABEL_12;
  }
LABEL_10:
  if ( (v4 & 0x80) == 0 )
    goto LABEL_11;
LABEL_40:
  v14 = (__int64 *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 71) |= 0x80u;
  if ( v14 == &Caver::Proto::GameState::_default_carried_object_identifier_ )
  {
    v14 = (__int64 *)operator new(8u);
    *v14 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 15) = v14;
  }
  sub_56A6A8(v14);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x1FE00) == 0 )
    goto LABEL_58;
LABEL_12:
  if ( (v4 & 0x200) != 0 )
  {
    v15 = *((_QWORD *)this + 23);
    *((_DWORD *)this + 71) |= 0x200u;
    if ( !v15 )
    {
      v16 = operator new(0x50u);
      *(_QWORD *)(v16 + 16) = v16 + 40;
      *(_QWORD *)(v16 + 24) = 0;
      *(_DWORD *)(v16 + 8) = 0;
      *(_DWORD *)(v16 + 72) = 0;
      *(_DWORD *)(v16 + 32) = 4;
      *(_QWORD *)v16 = off_6C6E20;
      *((_QWORD *)this + 23) = v16;
    }
    Caver::Proto::StateProperties::MergeFrom();
    v4 = *((_DWORD *)a2 + 71);
    if ( (v4 & 0x400) == 0 )
    {
LABEL_14:
      if ( (v4 & 0x800) == 0 )
        goto LABEL_15;
      goto LABEL_50;
    }
  }
  else if ( (v4 & 0x400) == 0 )
  {
    goto LABEL_14;
  }
  v17 = (__int64 *)*((_QWORD *)this + 24);
  *((_DWORD *)this + 71) |= 0x400u;
  if ( v17 == &Caver::Proto::GameState::_default_selected_menu_tab_ )
  {
    v17 = (__int64 *)operator new(8u);
    *v17 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 24) = v17;
  }
  sub_56A6A8(v17);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x800) == 0 )
  {
LABEL_15:
    if ( (v4 & 0x1000) == 0 )
      goto LABEL_16;
LABEL_51:
    v19 = *((_BYTE *)a2 + 201);
    *((_DWORD *)this + 71) |= 0x1000u;
    *((_BYTE *)this + 201) = v19;
    v4 = *((_DWORD *)a2 + 71);
    if ( (v4 & 0x2000) == 0 )
    {
LABEL_17:
      if ( (v4 & 0x4000) == 0 )
        goto LABEL_58;
      goto LABEL_55;
    }
    goto LABEL_52;
  }
LABEL_50:
  v18 = *((_BYTE *)a2 + 200);
  *((_DWORD *)this + 71) |= 0x800u;
  *((_BYTE *)this + 200) = v18;
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x1000) != 0 )
    goto LABEL_51;
LABEL_16:
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_17;
LABEL_52:
  v20 = (__int64 *)*((_QWORD *)this + 26);
  *((_DWORD *)this + 71) |= 0x2000u;
  if ( v20 == &Caver::Proto::GameState::_default_flashing_item_name_ )
  {
    v20 = (__int64 *)operator new(8u);
    *v20 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 26) = v20;
  }
  sub_56A6A8(v20);
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x4000) != 0 )
  {
LABEL_55:
    v21 = (__int64 *)*((_QWORD *)this + 27);
    *((_DWORD *)this + 71) |= 0x4000u;
    if ( v21 == &Caver::Proto::GameState::_default_flashing_skill_name_ )
    {
      v21 = (__int64 *)operator new(8u);
      *v21 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 27) = v21;
    }
    sub_56A6A8(v21);
    v4 = *((_DWORD *)a2 + 71);
  }
LABEL_58:
  if ( (v4 & 0xFF0000) == 0 )
    return;
  if ( (v4 & 0x10000) != 0 )
  {
    v23 = *((_BYTE *)a2 + 280);
    *((_DWORD *)this + 71) |= 0x10000u;
    *((_BYTE *)this + 280) = v23;
    v4 = *((_DWORD *)a2 + 71);
    if ( (v4 & 0x20000) == 0 )
    {
LABEL_61:
      if ( (v4 & 0x40000) == 0 )
        goto LABEL_62;
      goto LABEL_67;
    }
  }
  else if ( (v4 & 0x20000) == 0 )
  {
    goto LABEL_61;
  }
  v24 = *((_BYTE *)a2 + 281);
  *((_DWORD *)this + 71) |= 0x20000u;
  *((_BYTE *)this + 281) = v24;
  v4 = *((_DWORD *)a2 + 71);
  if ( (v4 & 0x40000) == 0 )
  {
LABEL_62:
    if ( (v4 & 0x80000) == 0 )
      return;
    goto LABEL_63;
  }
LABEL_67:
  v25 = *((_BYTE *)a2 + 282);
  *((_DWORD *)this + 71) |= 0x40000u;
  *((_BYTE *)this + 282) = v25;
  if ( (*((_DWORD *)a2 + 71) & 0x80000) == 0 )
    return;
LABEL_63:
  v22 = *((_BYTE *)a2 + 283);
  *((_DWORD *)this + 71) |= 0x80000u;
  *((_BYTE *)this + 283) = v22;
}

