/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEE6C
 * Mangled: _ZN5Caver10FastVectorINS_21PortalEffectComponent6VertexEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000201360  Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 21
 *   insn=0x00000000002AEE7C string=0x00000000002AEE80 "v"
 *   insn=0x00000000002AEE88 string=0x00000000002AEE8C "m"
 *   insn=0x00000000002AEE90 string=0x00000000002AEE94 "t"
 *   insn=0x00000000002AEE98 string=0x00000000002AEE9C "h"
 *   insn=0x00000000002AEE98 string=0x00000000002AEF28 "`"
 *   insn=0x00000000002AEEAC string=0x00000000002AEEB0 "}"
 *   insn=0x00000000002AEEB8 string=0x00000000002AEEBC " "
 *   insn=0x00000000002AEEC0 string=0x00000000002AEEC4 "h"
 *   insn=0x00000000002AEEC0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002AEECC string=0x00000000002AEF1C "t"
 *   insn=0x00000000002AEED0 string=0x00000000002AEED4 ""
 *   insn=0x00000000002AEEDC string=0x00000000002AEEE0 "Q"
 *   insn=0x00000000002AEEE4 string=0x00000000002AEEE8 "`"
 *   insn=0x00000000002AEEE8 string=0x00000000002AEEEC ")"
 *   insn=0x00000000002AEEEC string=0x00000000002AEEF0 "?"
 *   insn=0x00000000002AEEF4 string=0x00000000002AEEF8 "m"
 *   insn=0x00000000002AEEFC string=0x00000000002AEF00 "m\t@"
 *   insn=0x00000000002AEF04 string=0x00000000002AEF08 "m"
 *   insn=0x00000000002AEF18 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AEF1C string=0x00000000002AEF20 "u"
 *   insn=0x00000000002AEF28 string=0x00000000002AEF2C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(__int64 a1, int a2)
{
  int v3; // w22
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  char *v7; // x8
  __int64 v8; // x21
  __int64 v9; // x9
  char *v10; // x11
  __int64 v11; // x12
  __int64 v12; // t1
  void *v13; // x0

  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > a2 )
  {
    v3 = a2;
    *(_DWORD *)a1 = a2;
  }
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 4) != a2 )
    {
      if ( is_mul_ok(a2, 0x20u) )
        v5 = 32LL * a2;
      else
        v5 = -1;
      v6 = operator new[](v5);
      v7 = *(char **)(a1 + 8);
      v8 = v6;
      if ( v7 )
      {
        if ( v3 >= 1 )
        {
          v9 = 0;
          v10 = v7 + 20;
          v11 = v6 + 20;
          do
          {
            ++v9;
            *(_OWORD *)(v11 - 20) = *(_OWORD *)(v10 - 20);
            *(_DWORD *)(v11 - 4) = *((_DWORD *)v10 - 1);
            *(_DWORD *)(v11 + 8) = *((_DWORD *)v10 + 2);
            v12 = *(_QWORD *)v10;
            v10 += 32;
            *(_QWORD *)v11 = v12;
            v11 += 32;
          }
          while ( v9 < v3 );
        }
        operator delete[](v7);
      }
      *(_DWORD *)(a1 + 4) = a2;
      *(_QWORD *)(a1 + 8) = v8;
    }
  }
  else
  {
    v13 = *(void **)(a1 + 8);
    if ( v13 )
    {
      operator delete[](v13);
      *(_QWORD *)(a1 + 8) = 0;
    }
    *(_DWORD *)(a1 + 4) = 0;
  }
}

