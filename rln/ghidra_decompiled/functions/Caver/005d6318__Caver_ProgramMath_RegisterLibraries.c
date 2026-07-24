/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d6318
 * Function: Caver::ProgramMath::RegisterLibraries
 * Signature: undefined __cdecl RegisterLibraries(ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramMath::RegisterLibraries(Caver::ProgramState*) */

void Caver::ProgramMath::RegisterLibraries(ProgramState *param_1)

{
  RegisterVector3Library(param_1);
  RegisterRectangleLibrary(param_1);
  RegisterMathLibrary(param_1);
  return;
}


