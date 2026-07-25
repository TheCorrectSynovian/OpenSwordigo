/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F60
 * Mangled: ._ZN5Caver12ModelLibrary5ClearEv
 * Demangled: Caver::ModelLibrary::Clear(void)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Callees: 1
 *   0x000000000044B4C0  Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F68 string=0x0000000000202F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ModelLibrary::Clear(Caver::ModelLibrary *this)
{
  JUMPOUT(0x44B560);
}

