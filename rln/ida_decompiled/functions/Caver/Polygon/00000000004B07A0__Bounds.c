/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B07A0
 * Mangled: _ZNK5Caver7Polygon6BoundsEv
 * Demangled: Caver::Polygon::Bounds(void)
 *
 * Callers: 1
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Referenced strings: 9
 *   insn=0x00000000004B07B4 string=0x00000000004B07B8 "U"
 *   insn=0x00000000004B07D8 string=0x00000000004B07DC "_\t"
 *   insn=0x00000000004B07DC string=0x00000000004B07E0 "h%@)"
 *   insn=0x00000000004B07EC string=0x00000000004B07F0 "a!"
 *   insn=0x00000000004B07EC string=0x00000000004B083C "h&"
 *   insn=0x00000000004B07F8 string=0x00000000001F9E30 "0'"
 *   insn=0x00000000004B082C string=0x00000000004B0830 ""
 *   insn=0x00000000004B083C string=0x00000000004B0840 "`"
 *   insn=0x00000000004B0874 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__usercall Caver::Polygon::Bounds@<X0>(int *this@<X0>, __int64 a2@<X8>)
{
  int *v2; // x20
  int v4; // w10
  int *v5; // x11
  __int64 v6; // d0
  int v7; // w8
  int v8; // w9
  __int64 v9; // x22
  __int64 v10; // x23
  int v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+Ch] [xbp-44h]
  __int64 v13; // [xsp+10h] [xbp-40h]
  __int64 v14; // [xsp+18h] [xbp-38h]

  v2 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *this;
  if ( *this )
  {
    v5 = (int *)*((_QWORD *)this + 1);
    v6 = 0;
    v7 = *v5;
    v8 = v5[1];
    v13 = 0;
    v11 = v7;
    v12 = v8;
    if ( v4 >= 2 )
    {
      this = (int *)Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)&v11, (const Caver::Vector2 *)(v5 + 2));
      if ( *v2 >= 3 )
      {
        v9 = 2;
        v10 = 16;
        do
        {
          this = (int *)Caver::Rectangle::ExpandToIncludePoint(
                          (Caver::Rectangle *)&v11,
                          (const Caver::Vector2 *)(*((_QWORD *)v2 + 1) + v10));
          ++v9;
          v10 += 8;
        }
        while ( v9 < *v2 );
      }
      v7 = v11;
      v8 = v12;
      v6 = v13;
    }
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8;
    *(_QWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return this;
}

