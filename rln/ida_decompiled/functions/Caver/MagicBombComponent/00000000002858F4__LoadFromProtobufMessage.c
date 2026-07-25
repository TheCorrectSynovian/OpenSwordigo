/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002858F4
 * Mangled: _ZN5Caver18MagicBombComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicBombComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 14
 *   insn=0x0000000000285904 string=0x0000000000285908 "U"
 *   insn=0x0000000000285918 string=0x000000000028591C "m"
 *   insn=0x000000000028591C string=0x0000000000285920 "#"
 *   insn=0x000000000028591C string=0x00000000001FC2D0 "0'"
 *   insn=0x0000000000285920 string=0x0000000000285924 ""
 *   insn=0x0000000000285924 string=0x0000000000285928 "`""
 *   insn=0x0000000000285934 string=0x0000000000285938 "\t#"
 *   insn=0x0000000000285938 string=0x000000000028593C "@"
 *   insn=0x000000000028593C string=0x0000000000285940 ")"
 *   insn=0x0000000000285944 string=0x0000000000285948 ")"
 *   insn=0x0000000000285948 string=0x000000000028594C "("
 *   insn=0x0000000000285958 string=0x00000000001FA090 "0'"
 *   insn=0x0000000000285970 string=0x0000000000285988 "R"
 *   insn=0x0000000000285988 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicBombComponent::LoadFromProtobufMessage(
        Caver::MagicBombComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  const Caver::Proto::FloatColor *v5; // x1
  __int64 v6; // x8
  long double result; // q0
  long double v8; // [xsp+8h] [xbp-38h] BYREF
  __int64 v9; // [xsp+18h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::MagicBombComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9878);
  if ( *(_QWORD *)(Message + 16) )
    v6 = Message;
  else
    v6 = Caver::Proto::MagicBombComponent::default_instance_;
  Caver::FloatColorFromProtobufMessage((__int64 *)&v8, *(Caver **)(v6 + 16), v5);
  result = v8;
  *((long double *)this + 13) = v8;
  return result;
}

