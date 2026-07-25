/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243808
 * Mangled: _ZN5Caver5Scene25NewProgramStateForProgramERKNS_7ProgramE
 * Demangled: Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000001FCA90  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callees: 5
 *   0x00000000001F3FC0  Caver::ProgramState::LoadProgram(Caver::Program const&)
 *   0x0000000000201870  Caver::ProgramState::CreateChildState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002438B0  Caver::Component::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000243810 string=0x0000000000243814 "\t$@9"
 *   insn=0x000000000024381C string=0x0000000000243820 ")"
 *   insn=0x000000000024382C string=0x0000000000243830 "`"
 *   insn=0x000000000024383C string=0x00000000001F3FC0 "P'"
 *   insn=0x0000000000243858 string=0x000000000024385C "4"
 *   insn=0x0000000000243860 string=0x0000000000243864 ""
 *   insn=0x0000000000243870 string=0x0000000000243874 "\t@"
 *   insn=0x0000000000243880 string=0x0000000000243884 ""
 *   insn=0x0000000000243890 string=0x0000000000243894 "@"
 *   insn=0x00000000002438A0 string=0x00000000002438A4 ""
 *   insn=0x00000000002438A8 string=0x00000000002438AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__usercall Caver::Scene::NewProgramStateForProgram@<X0>(
        _BYTE *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 *a3@<X8>)
{
  if ( this[9] )
  {
    Caver::ProgramState::CreateChildState(a3, (Caver::ProgramState *)(this + 40));
    this = (_BYTE *)*a3;
    if ( *a3 )
      return (_BYTE *)Caver::ProgramState::LoadProgram((Caver::ProgramState *)this, a2);
  }
  else
  {
    *a3 = 0;
    a3[1] = 0;
  }
  return this;
}

