/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DF70
 * Mangled: _ZN5Caver13ObjectLibrary15LoadAllProgramsEPNS_12ProgramStateE
 * Demangled: Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *
 * Callers: 2
 *   0x00000000001F9B40  Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *   0x000000000045DF70  Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000001F9F70  Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Referenced strings: 7
 *   insn=0x000000000045DF80 string=0x000000000045DF84 "h"
 *   insn=0x000000000045DF8C string=0x000000000045DF90 "u6@"
 *   insn=0x000000000045DF94 string=0x000000000045DFA4 "h:@"
 *   insn=0x000000000045DFA0 string=0x00000000001F9F70 "0'"
 *   insn=0x000000000045DFA8 string=0x000000000045DFAC "a"
 *   insn=0x000000000045DFAC string=0x000000000045DFB0 "u"
 *   insn=0x000000000045DFB4 string=0x000000000045DFB8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::LoadAllPrograms(__int64 this, Caver::ProgramState *a2)
{
  __int64 v2; // x19
  const Caver::Program **i; // x21
  const Caver::Program *v5; // t1
  Caver::ObjectLibrary **v6; // x21
  Caver::ObjectLibrary **v7; // x22
  Caver::ObjectLibrary *v8; // t1

  v2 = this;
  if ( !*(_BYTE *)(this + 128) )
  {
    for ( i = *(const Caver::Program ***)(this + 104); i != *(const Caver::Program ***)(v2 + 112); i += 2 )
    {
      v5 = *i;
      this = Caver::ProgramState::ExecuteProgram(a2, v5);
    }
    v6 = *(Caver::ObjectLibrary ***)(v2 + 56);
    v7 = *(Caver::ObjectLibrary ***)(v2 + 64);
    for ( *(_BYTE *)(v2 + 128) = 1; v7 != v6; this = Caver::ObjectLibrary::LoadAllPrograms(v8, a2) )
    {
      v8 = *v6;
      v6 += 2;
    }
    *(_BYTE *)(v2 + 128) = 0;
  }
  return this;
}

