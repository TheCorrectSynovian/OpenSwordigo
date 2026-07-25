/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034EAC8
 * Mangled: _ZN5Caver13GameSceneView20ResetSceneControllerEv
 * Demangled: Caver::GameSceneView::ResetSceneController(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000034EADC string=0x000000000034EAE0 "h"
 *   insn=0x000000000034EAE0 string=0x000000000034EAE4 ""
 *   insn=0x000000000034EAE4 string=0x000000000034EAE8 "h"
 *   insn=0x000000000034EAE8 string=0x000000000034EAEC "!"
 *   insn=0x000000000034EAEC string=0x000000000034EAF0 "h"
 *   insn=0x000000000034EAF4 string=0x000000000034EAF8 "\t@"
 *   insn=0x000000000034EAFC string=0x000000000034EB00 "h\n@"
 *   insn=0x000000000034EB00 string=0x000000000034EB04 ""
 *   insn=0x000000000034EB04 string=0x000000000034EB08 "h\n"
 *   insn=0x000000000034EB0C string=0x000000000034EB1C "h"
 *   insn=0x000000000034EB2C string=0x000000000034EB30 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::ResetSceneController(__int64 this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(this + 248);
  *(_QWORD *)(this + 240) = 0;
  *(_QWORD *)(this + 248) = 0;
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      this = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return this;
}

