/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038917C
 * Mangled: _ZN5Caver16OnlineControllerD0Ev
 * Demangled: Caver::OnlineController::~OnlineController()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x000000000038917C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OnlineController::~OnlineController(Caver::OnlineController *this)
{
  operator delete(this);
}

