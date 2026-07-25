/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021FFEC
 * Mangled: _ZN5Caver26KeyframeAnimationComponent15RegisterLibraryEv
 * Demangled: Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FA7A0  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x000000000021FFF8 string=0x000000000021FFFC "S"
 *   insn=0x000000000021FFFC string=0x0000000000220000 "h"
 *   insn=0x0000000000220004 string=0x0000000000220008 ""
 *   insn=0x0000000000220010 string=0x0000000000583EAB "KeyframeAnimation"
 *   insn=0x0000000000220030 string=0x0000000000220034 "s^"
 *   insn=0x0000000000220034 string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000220038 string=0x000000000022003C ")&"
 *   insn=0x000000000022003C string=0x0000000000220040 ")"
 *   insn=0x0000000000220048 string=0x000000000022004C "!"
 *   insn=0x000000000022004C string=0x0000000000220050 "h"
 *   insn=0x000000000022004C string=0x0000000000220070 ")&"
 *   insn=0x0000000000220070 string=0x0000000000220074 ")=G"
 *   insn=0x0000000000220074 string=0x0000000000220078 "!"
 *   insn=0x000000000022007C string=0x0000000000220080 "\t"
 *   insn=0x000000000022007C string=0x0000000000220094 "\t"
 *   insn=0x0000000000220080 string=0x0000000000220084 "*"
 *   insn=0x0000000000220084 string=0x0000000000220088 "\n"
 *   insn=0x0000000000220090 string=0x00000000002200A0 "?"
 *   insn=0x0000000000220094 string=0x0000000000220098 "*"
 *   insn=0x0000000000220098 string=0x000000000022009C "\n"
 *   insn=0x00000000002200A0 string=0x00000000002200A4 "l"
 *   insn=0x00000000002200B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002200B8 string=0x00000000002200BC "*&"
 *   insn=0x00000000002200BC string=0x00000000002200C0 "J"
 *   insn=0x00000000002200C4 string=0x00000000002200C8 "(a"
 *   insn=0x00000000002200D0 string=0x00000000002200D4 "*&"
 *   insn=0x00000000002200D4 string=0x00000000002200D8 "J=G"
 *   insn=0x00000000002200D8 string=0x00000000002200DC ")!"
 *   insn=0x00000000002200E0 string=0x00000000002200E4 "*"
 *   insn=0x00000000002200E0 string=0x0000000000220110 "*"
 *   insn=0x00000000002200E4 string=0x00000000002200E8 "K"
 *   insn=0x00000000002200E8 string=0x00000000002200EC "+"
 *   insn=0x00000000002200F0 string=0x00000000002200F4 "_"
 *   insn=0x0000000000220110 string=0x0000000000220114 "K"
 *   insn=0x0000000000220114 string=0x0000000000220118 "+"
 *   insn=0x0000000000220118 string=0x000000000022011C "_"
 *   insn=0x0000000000220140 string=0x0000000000220144 "(&"
 *   insn=0x0000000000220140 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000220144 string=0x0000000000220148 ""
 *   insn=0x0000000000220160 string=0x0000000000220164 ""
 *   insn=0x0000000000220168 string=0x000000000022016C "iz@"
 *   insn=0x000000000022016C string=0x0000000000220170 "?"
 *   insn=0x0000000000220174 string=0x0000000000220178 "`B@"
 *   insn=0x0000000000220178 string=0x000000000022017C "hz"
 *   insn=0x0000000000220184 string=0x0000000000220188 "@"
 *   insn=0x0000000000220188 string=0x000000000022018C ""
 *   insn=0x000000000022018C string=0x0000000000220190 ""
 *   insn=0x0000000000220194 string=0x0000000000220198 ""
 *   insn=0x0000000000220198 string=0x000000000022019C ""
 *   insn=0x00000000002201A8 string=0x00000000002201BC "iJ@"
 *   insn=0x00000000002201AC string=0x00000000002201B0 "`""
 *   insn=0x00000000002201B0 string=0x00000000002201B4 "=)"
 *   insn=0x00000000002201C0 string=0x00000000002201C4 "*"
 *   insn=0x00000000002201C4 string=0x00000000002201C8 "h"
 *   insn=0x00000000002201CC string=0x00000000002201D0 "("
 *   insn=0x00000000002201D4 string=0x00000000002201D8 "(1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::KeyframeAnimationComponent::RegisterLibrary(Caver::KeyframeAnimationComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+28h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "KeyframeAnimation");
  Caver::ProgramState::RegisterLibrary();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

