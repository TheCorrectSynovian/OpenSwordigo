/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000275AE4
 * Mangled: _ZN5Caver17ItemDropComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *
 * Callers: 1
 *   0x00000000001F77A0  Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *
 * Callees: 2
 *   0x0000000000200660  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(int)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 17
 *   insn=0x0000000000275AFC string=0x0000000000275B00 "h"@"
 *   insn=0x0000000000275B04 string=0x0000000000275B08 "a"
 *   insn=0x0000000000275B14 string=0x0000000000275B18 "a"
 *   insn=0x0000000000275B20 string=0x0000000000275B24 "a"
 *   insn=0x0000000000275B2C string=0x0000000000275B30 "h"
 *   insn=0x0000000000275B34 string=0x0000000000275B38 "h"
 *   insn=0x0000000000275B3C string=0x0000000000275B40 "h"
 *   insn=0x0000000000275B58 string=0x0000000000275B5C "Z"
 *   insn=0x0000000000275B60 string=0x0000000000275B64 "wJ@"
 *   insn=0x0000000000275B6C string=0x0000000000275B70 "(y"
 *   insn=0x0000000000275B88 string=0x0000000000275B8C "}@"
 *   insn=0x0000000000275B94 string=0x0000000000275B98 "6"
 *   insn=0x0000000000275BB0 string=0x0000000000275BB4 "9"
 *   insn=0x0000000000275BC8 string=0x0000000000275BCC ""
 *   insn=0x0000000000275BD0 string=0x0000000000275BD4 "i"
 *   insn=0x0000000000275BD4 string=0x0000000000275BD8 "?"
 *   insn=0x0000000000275BD8 string=0x0000000000275BDC "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemDropComponent::InitWithComponent(
        Caver::ItemDropComponent *this,
        const Caver::ItemDropComponent *a2)
{
  __int64 result; // x0
  int v5; // w8
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x23
  __int64 v9; // x23
  __int64 v10; // x22

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  sub_56A6A8((char *)this + 120);
  result = sub_56A6A8((char *)this + 128);
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 112);
  *((_BYTE *)this + 113) = *((_BYTE *)a2 + 113);
  if ( *((int *)a2 + 34) >= 1 )
  {
    v5 = *((_DWORD *)this + 34);
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *((_QWORD *)a2 + 18);
      if ( v5 >= *((_DWORD *)this + 35) )
      {
        Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize();
        v5 = *((_DWORD *)this + 34);
      }
      v9 = v8 + v6;
      v10 = *((_QWORD *)this + 18) + 32LL * v5;
      sub_56A6A8(v10);
      result = sub_56A6A8(v10 + 8);
      ++v7;
      v6 += 32;
      *(_DWORD *)(v10 + 24) = *(_DWORD *)(v9 + 24);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(v9 + 16);
      v5 = *((_DWORD *)this + 34) + 1;
      *((_DWORD *)this + 34) = v5;
    }
    while ( v7 < *((int *)a2 + 34) );
  }
  return result;
}

