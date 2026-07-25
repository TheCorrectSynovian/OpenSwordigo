/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453B50
 * Mangled: _ZN5Caver14ParticleSystem20InitWithMaxParticlesEi
 * Demangled: Caver::ParticleSystem::InitWithMaxParticles(int)
 *
 * Callers: 2
 *   0x0000000000200C20  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x0000000000453994  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Callees: 5
 *   0x00000000001F3DB0  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5390  Caver::VertexArrayObject::Reset(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F92C0  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *
 * Referenced strings: 49
 *   insn=0x0000000000453B70 string=0x0000000000453B74 ")"
 *   insn=0x0000000000453B7C string=0x0000000000453B80 " "
 *   insn=0x0000000000453B80 string=0x0000000000453B84 "t~"
 *   insn=0x0000000000453B84 string=0x0000000000453B88 "z"
 *   insn=0x0000000000453B88 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000453B8C string=0x0000000000453BCC "h"
 *   insn=0x0000000000453B98 string=0x0000000000453B9C "!"
 *   insn=0x0000000000453BAC string=0x0000000000453BB0 "_}"
 *   insn=0x0000000000453BB0 string=0x0000000000453BB4 "_%"
 *   insn=0x0000000000453BB4 string=0x0000000000453BB8 "@"
 *   insn=0x0000000000453BB8 string=0x0000000000453BBC "_A"
 *   insn=0x0000000000453BBC string=0x0000000000453BC0 "J"
 *   insn=0x0000000000453BC0 string=0x0000000000453BC4 "_"
 *   insn=0x0000000000453BC4 string=0x0000000000453BC8 "A"
 *   insn=0x0000000000453BCC string=0x0000000000453BD0 "`"
 *   insn=0x0000000000453BD0 string=0x0000000000453BD4 "h"
 *   insn=0x0000000000453BD4 string=0x0000000000453BE0 "t""
 *   insn=0x0000000000453BDC string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000453BEC string=0x0000000000453BF0 "h2"
 *   insn=0x0000000000453BF4 string=0x0000000000453BF8 "h"@"
 *   insn=0x0000000000453BF4 string=0x00000000001F5390 "P'"
 *   insn=0x0000000000453BF8 string=0x0000000000453BFC "i2@"
 *   insn=0x0000000000453C00 string=0x0000000000453C04 "}\t"
 *   insn=0x0000000000453C08 string=0x0000000000453C0C "i"
 *   insn=0x0000000000453C0C string=0x0000000000453C10 "h"@"
 *   insn=0x0000000000453C0C string=0x00000000001F3DB0 "P'"
 *   insn=0x0000000000453C10 string=0x0000000000453C14 "a"
 *   insn=0x0000000000453C18 string=0x0000000000453C1C ""
 *   insn=0x0000000000453C24 string=0x0000000000453C28 "h""
 *   insn=0x0000000000453C24 string=0x00000000001F92C0 "0'"
 *   insn=0x0000000000453C28 string=0x0000000000453C2C "j2@"
 *   insn=0x0000000000453C2C string=0x0000000000453C30 "i*@"
 *   insn=0x0000000000453C34 string=0x0000000000453C38 "j"
 *   insn=0x0000000000453C38 string=0x0000000000453C3C "K"
 *   insn=0x0000000000453C40 string=0x0000000000453C44 "J"
 *   insn=0x0000000000453C48 string=0x0000000000453C4C "l"
 *   insn=0x0000000000453C4C string=0x0000000000453C50 "m\t"
 *   insn=0x0000000000453C50 string=0x0000000000453C54 "n"
 *   insn=0x0000000000453C54 string=0x0000000000453C58 ")"
 *   insn=0x0000000000453C58 string=0x0000000000453C5C "K\t"
 *   insn=0x0000000000453C5C string=0x0000000000453C60 "k"
 *   insn=0x0000000000453C60 string=0x0000000000453C64 "L"
 *   insn=0x0000000000453C64 string=0x0000000000453C68 "M"
 *   insn=0x0000000000453C68 string=0x0000000000453C6C "N"
 *   insn=0x0000000000453C6C string=0x0000000000453C70 "N"
 *   insn=0x0000000000453C70 string=0x0000000000453C74 "M"
 *   insn=0x0000000000453C74 string=0x0000000000453C78 "?"
 *   insn=0x0000000000453C78 string=0x0000000000453C7C "J1"
 *   insn=0x0000000000453C7C string=0x0000000000453C80 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::InitWithMaxParticles(Caver::ParticleSystem *this, int a2)
{
  __int64 v3; // x21
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x10
  void *v8; // x8
  __int64 result; // x0
  __int64 v10; // x8
  __int64 v11; // x10
  __int64 v12; // x9
  __int64 v13; // x9
  _WORD *v14; // x10
  int v15; // w11
  __int16 v16; // w12
  __int16 v17; // w13
  __int16 v18; // w14

  v3 = a2;
  if ( is_mul_ok(a2, 0x44u) )
    v5 = 68LL * a2;
  else
    v5 = -1;
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 9) = 0;
  v6 = operator new[](v5);
  if ( a2 )
  {
    v7 = v6;
    do
    {
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v7 + 32) = xmmword_583800;
      *(_OWORD *)(v7 + 48) = xmmword_589600;
      *(_DWORD *)(v7 + 64) = 0;
      v7 += 68;
    }
    while ( v7 != v6 + 68 * v3 );
  }
  v8 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v6;
  if ( v8 )
    operator delete[](v8);
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 12) = 24;
  Caver::VertexArrayObject::Reset((Caver::ParticleSystem *)((char *)this + 72));
  Caver::VertexArrayObject::CreateVertexBuffer(
    (Caver::ParticleSystem *)((char *)this + 72),
    4 * *((_DWORD *)this + 8) * *((_DWORD *)this + 12));
  result = Caver::VertexArrayObject::CreateIndexBuffer();
  v10 = *((int *)this + 8);
  v11 = *((_QWORD *)this + 12);
  v12 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 7) = v11;
  *((_QWORD *)this + 8) = v12;
  if ( (int)v10 >= 1 )
  {
    v13 = 0;
    v14 = (_WORD *)(v11 + 6);
    v15 = 3;
    do
    {
      v16 = v15 - 3;
      v17 = v15 - 2;
      v18 = v15 - 1;
      ++v13;
      v14[2] = v15;
      v15 += 4;
      *(v14 - 3) = v16;
      *(v14 - 2) = v17;
      *(v14 - 1) = v18;
      *v14 = v18;
      v14[1] = v17;
      v14 += 6;
    }
    while ( v13 < v10 );
  }
  return result;
}

