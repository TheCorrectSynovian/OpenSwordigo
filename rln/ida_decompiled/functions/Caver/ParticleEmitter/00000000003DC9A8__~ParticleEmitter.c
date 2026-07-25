/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DC9A8
 * Mangled: _ZN5Caver15ParticleEmitterD0Ev
 * Demangled: Caver::ParticleEmitter::~ParticleEmitter()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000003DCA4C  Caver::ParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000003DC9B4 string=0x00000000003DC9B8 "H"
 *   insn=0x00000000003DC9B8 string=0x00000000003DC9BC "`f@"
 *   insn=0x00000000003DC9BC string=0x00000000003DC9C0 ""
 *   insn=0x00000000003DC9C0 string=0x00000000003DC9C4 "A"
 *   insn=0x00000000003DC9C4 string=0x00000000003DC9C8 "h"
 *   insn=0x00000000003DC9C8 string=0x00000000003DC9CC "@"
 *   insn=0x00000000003DC9CC string=0x00000000003DC9D0 "da"
 *   insn=0x00000000003DC9CC string=0x00000000003DC9D4 "`"
 *   insn=0x00000000003DC9D0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DC9D4 string=0x00000000003DC9D8 "@"
 *   insn=0x00000000003DC9D8 string=0x00000000003DC9DC "5j"
 *   insn=0x00000000003DC9D8 string=0x00000000003DC9E0 "t\n@"
 *   insn=0x00000000003DC9DC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DC9E0 string=0x00000000003DC9E4 "4"
 *   insn=0x00000000003DC9E8 string=0x00000000003DC9EC ""
 *   insn=0x00000000003DC9F8 string=0x00000000003DC9FC "\t@"
 *   insn=0x00000000003DCA08 string=0x00000000003DCA0C ""
 *   insn=0x00000000003DCA18 string=0x00000000003DCA1C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitter::~ParticleEmitter(Caver::ParticleEmitter *this)
{
  void *v2; // x0
  void *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = (void *)*((_QWORD *)this + 25);
  *(_QWORD *)this = off_6D0138;
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    operator delete(v3);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  operator delete(this);
}

