/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C984
 * Mangled: _ZN5Caver28AnimationControllerComponent7PrepareEv
 * Demangled: Caver::AnimationControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA220  Caver::AnimationControllerComponent::RegisterLibrary(void)
 *   0x00000000001FCA10  Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 83
 *   insn=0x000000000021C990 string=0x000000000021C994 "#v"
 *   insn=0x000000000021C994 string=0x00000000001FA220 "0'"
 *   insn=0x000000000021C99C string=0x000000000021C9B4 ""
 *   insn=0x000000000021C9A4 string=0x000000000021C9A8 "Nl"
 *   insn=0x000000000021C9A8 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000021C9B4 string=0x000000000021C9B8 ""
 *   insn=0x000000000021C9C4 string=0x000000000021C9C8 "h\n@"
 *   insn=0x000000000021C9C8 string=0x000000000021C9CC "\t"
 *   insn=0x000000000021C9CC string=0x000000000021C9D0 "h\n"
 *   insn=0x000000000021C9DC string=0x000000000021C9E0 "@"
 *   insn=0x000000000021C9E0 string=0x000000000021C9E4 ""
 *   insn=0x000000000021C9E4 string=0x000000000021C9E8 ""
 *   insn=0x000000000021C9EC string=0x000000000021C9F0 ""
 *   insn=0x000000000021C9F0 string=0x000000000021C9F4 ""
 *   insn=0x000000000021C9FC string=0x000000000021CA00 "h\n@"
 *   insn=0x000000000021CA00 string=0x000000000021CA04 ""
 *   insn=0x000000000021CA04 string=0x000000000021CA08 "h\n"
 *   insn=0x000000000021CA0C string=0x000000000021CA1C "h"
 *   insn=0x000000000021CA2C string=0x000000000021CA30 " "
 *   insn=0x000000000021CA34 string=0x000000000021CA38 "3"
 *   insn=0x000000000021CA38 string=0x000000000021CA3C "h\n@"
 *   insn=0x000000000021CA3C string=0x000000000021CA40 ""
 *   insn=0x000000000021CA40 string=0x000000000021CA44 "h\n"
 *   insn=0x000000000021CA48 string=0x000000000021CA4C "h"
 *   insn=0x000000000021CA4C string=0x000000000021CA50 ""
 *   insn=0x000000000021CA60 string=0x000000000021CA64 ":"
 *   insn=0x000000000021CA74 string=0x000000000021CA78 "S"
 *   insn=0x000000000021CA78 string=0x000000000021CA7C "h"
 *   insn=0x000000000021CA80 string=0x000000000021CA84 ""
 *   insn=0x000000000021CA88 string=0x000000000021CA8C "A"
 *   insn=0x000000000021CA8C string=0x00000000005879FE "AnimationController"
 *   insn=0x000000000021CA98 string=0x000000000021CA9C "G("
 *   insn=0x000000000021CAB0 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000021CAB4 string=0x000000000021CAB8 "I&"
 *   insn=0x000000000021CAB8 string=0x000000000021CABC ")"
 *   insn=0x000000000021CAC4 string=0x000000000021CAC8 "!"
 *   insn=0x000000000021CAC8 string=0x000000000021CACC "h"
 *   insn=0x000000000021CAC8 string=0x000000000021CAEC "I&"
 *   insn=0x000000000021CAEC string=0x000000000021CAF0 ")=G"
 *   insn=0x000000000021CAF0 string=0x000000000021CAF4 "!"
 *   insn=0x000000000021CAF8 string=0x000000000021CAFC "\t"
 *   insn=0x000000000021CAF8 string=0x000000000021CB10 "\t"
 *   insn=0x000000000021CAFC string=0x000000000021CB00 "*"
 *   insn=0x000000000021CB00 string=0x000000000021CB04 "\n"
 *   insn=0x000000000021CB0C string=0x000000000021CB1C "?"
 *   insn=0x000000000021CB10 string=0x000000000021CB14 "*"
 *   insn=0x000000000021CB14 string=0x000000000021CB18 "\n"
 *   insn=0x000000000021CB1C string=0x000000000021CB20 "l"
 *   insn=0x000000000021CB30 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021CB34 string=0x000000000021CB38 "J&"
 *   insn=0x000000000021CB38 string=0x000000000021CB3C "J"
 *   insn=0x000000000021CB40 string=0x000000000021CB44 "(a"
 *   insn=0x000000000021CB4C string=0x000000000021CB50 "J&"
 *   insn=0x000000000021CB50 string=0x000000000021CB54 "J=G"
 *   insn=0x000000000021CB54 string=0x000000000021CB58 ")!"
 *   insn=0x000000000021CB5C string=0x000000000021CB60 "*"
 *   insn=0x000000000021CB5C string=0x000000000021CB8C "*"
 *   insn=0x000000000021CB60 string=0x000000000021CB64 "K"
 *   insn=0x000000000021CB64 string=0x000000000021CB68 "+"
 *   insn=0x000000000021CB6C string=0x000000000021CB70 "_"
 *   insn=0x000000000021CB7C string=0x000000000021CB80 "\t6"
 *   insn=0x000000000021CB84 string=0x000000000021CB88 "O"
 *   insn=0x000000000021CB8C string=0x000000000021CB90 "K"
 *   insn=0x000000000021CB90 string=0x000000000021CB94 "+"
 *   insn=0x000000000021CB94 string=0x000000000021CB98 "_"
 *   insn=0x000000000021CBBC string=0x000000000021CBC0 "tB@"
 *   insn=0x000000000021CBC0 string=0x000000000021CBC4 ""
 *   insn=0x000000000021CBC8 string=0x000000000021CBCC "`"
 *   insn=0x000000000021CBC8 string=0x000000000021CBE0 "uZ@"
 *   insn=0x000000000021CBD4 string=0x000000000021CBD8 "tB@"
 *   insn=0x000000000021CBE4 string=0x000000000021CC5C "sR@"
 *   insn=0x000000000021CBF4 string=0x000000000021CBF8 "!@"
 *   insn=0x000000000021CC0C string=0x000000000021CC10 "`Z@"
 *   insn=0x000000000021CC0C string=0x00000000001FCA10 "0'"
 *   insn=0x000000000021CC10 string=0x000000000021CC14 "("
 *   insn=0x000000000021CC14 string=0x0000000000583730 "w"
 *   insn=0x000000000021CC2C string=0x000000000021CC30 "@"
 *   insn=0x000000000021CC30 string=0x000000000021CC34 ""
 *   insn=0x000000000021CC34 string=0x000000000021CC38 ""
 *   insn=0x000000000021CC3C string=0x000000000021CC40 ""
 *   insn=0x000000000021CC54 string=0x000000000021CC58 " "
 *   insn=0x000000000021CC70 string=0x000000000021CC74 "!@"
 *   insn=0x000000000021CC94 string=0x000000000021CC98 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::AnimationControllerComponent::Prepare(Caver::AnimationControllerComponent *this)
{
  _DWORD *result; // x0
  __int64 v3; // x0
  _DWORD *v4; // x19
  int v5; // w8
  int v6; // w8

  Caver::AnimationControllerComponent::RegisterLibrary(this);
  result = (_DWORD *)*((_QWORD *)this + 19);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::AnimationControllerComponent *)((char *)this + 136), this),
        (result = (_DWORD *)*((_QWORD *)this + 19)) != 0) )
  {
    v3 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 264LL))(result);
    v4 = (_DWORD *)v3;
    if ( v3 )
      *(_DWORD *)(v3 + 8) += 2;
    result = (_DWORD *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v4;
    if ( result )
    {
      v5 = result[2] - 1;
      result[2] = v5;
      if ( !v5 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
    if ( v4 )
    {
      v6 = v4[2] - 1;
      v4[2] = v6;
      if ( !v6 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}

