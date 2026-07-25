/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FF40
 * Mangled: _ZN5Caver18PhysicsObjectStateD2Ev
 * Demangled: Caver::PhysicsObjectState::~PhysicsObjectState()
 *
 * Callers: 1
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000027FF44 string=0x000000000027FF48 "@"
 *   insn=0x000000000027FF48 string=0x000000000027FF4C ""
 *   insn=0x000000000027FF4C string=0x000000000027FF50 ""
 *   insn=0x000000000027FF50 string=0x000000000027FF54 "@"
 *   insn=0x000000000027FF54 string=0x000000000027FF5C ""
 *   insn=0x000000000027FF60 string=0x000000000027FF64 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectState::~PhysicsObjectState(Caver::PhysicsObjectState *this)
{
  _DWORD *v1; // x0
  int v2; // w8

  v1 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    v2 = v1[2] - 1;
    v1[2] = v2;
    if ( !v2 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 8LL))(v1);
  }
}

