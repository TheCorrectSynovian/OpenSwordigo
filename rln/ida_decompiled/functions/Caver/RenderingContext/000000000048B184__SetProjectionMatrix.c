/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B184
 * Mangled: _ZN5Caver16RenderingContext19SetProjectionMatrixERKNS_7Matrix4E
 * Demangled: Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FBDC0  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Callees: 2
 *   0x00000000001F5760  .glMatrixMode
 *   0x00000000001FBDA0  .glLoadMatrixf
 *
 * Referenced strings: 37
 *   insn=0x000000000048B18C string=0x000000000048B190 ""
 *   insn=0x000000000048B190 string=0x000000000048B194 " "
 *   insn=0x000000000048B19C string=0x000000000048B1A0 "\n"
 *   insn=0x000000000048B1A0 string=0x000000000048B1A4 ","
 *   insn=0x000000000048B1A4 string=0x000000000048B1A8 "I"
 *   insn=0x000000000048B1A8 string=0x000000000048B1AC ")"
 *   insn=0x000000000048B1AC string=0x000000000048B1B0 "*"
 *   insn=0x000000000048B1B4 string=0x000000000048B1B8 "_!"
 *   insn=0x000000000048B1B8 string=0x000000000048B1BC "\t"
 *   insn=0x000000000048B1BC string=0x000000000048B1C0 "b"
 *   insn=0x000000000048B1C8 string=0x000000000048B244 "jE@"
 *   insn=0x000000000048B1CC string=0x000000000048B1D0 ""
 *   insn=0x000000000048B1D0 string=0x000000000048B1D4 "k"
 *   insn=0x000000000048B1D4 string=0x000000000048B1D8 "l"
 *   insn=0x000000000048B1D8 string=0x000000000048B1DC "l"
 *   insn=0x000000000048B1E0 string=0x000000000048B1E4 "?"
 *   insn=0x000000000048B1E8 string=0x000000000048B1EC "k!"
 *   insn=0x000000000048B1E8 string=0x000000000048B204 "L"
 *   insn=0x000000000048B1EC string=0x000000000048B1F0 "k"
 *   insn=0x000000000048B1F0 string=0x000000000048B1F4 ""
 *   insn=0x000000000048B1FC string=0x000000000048B200 "("
 *   insn=0x000000000048B208 string=0x000000000048B20C "k"
 *   insn=0x000000000048B20C string=0x000000000048B210 "\t"
 *   insn=0x000000000048B210 string=0x000000000048B214 "P"
 *   insn=0x000000000048B214 string=0x000000000048B218 ")"
 *   insn=0x000000000048B218 string=0x000000000048B21C "nB"
 *   insn=0x000000000048B234 string=0x000000000048B238 "a"
 *   insn=0x000000000048B238 string=0x000000000048B23C "_"
 *   insn=0x000000000048B240 string=0x000000000048B254 ""
 *   insn=0x000000000048B244 string=0x000000000048B248 "*E"
 *   insn=0x000000000048B248 string=0x000000000048B24C "?"
 *   insn=0x000000000048B258 string=0x000000000048B270 " "
 *   insn=0x000000000048B25C string=0x000000000048B260 ""
 *   insn=0x000000000048B270 string=0x000000000048B274 ";"
 *   insn=0x000000000048B274 string=0x00000000001F5760 "P'"
 *   insn=0x000000000048B27C string=0x00000000001FBDA0 "0'"
 *   insn=0x000000000048B288 string=0x000000000048B28C "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetProjectionMatrix(__int64 this, const Caver::Matrix4 *a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x11
  __int64 v4; // x10
  unsigned __int64 v5; // x10
  _DWORD *v6; // x9
  const Caver::Matrix4 *v7; // x11
  unsigned __int64 v8; // x11
  bool v9; // cc
  __int64 v10; // x9
  _OWORD *v11; // x13
  __int128 *v12; // x14
  __int64 v13; // x15
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // t1

  v2 = this + 260;
  v3 = this + 200;
  if ( this + 260 <= (unsigned __int64)(this + 200) )
    v4 = this + 200;
  else
    v4 = this + 260;
  v5 = ((unsigned __int64)(v4 + -197 - this) >> 2) + 1;
  v6 = (_DWORD *)(this + 196);
  if ( v5 < 8 )
  {
    v7 = a2;
    do
    {
LABEL_13:
      v16 = *(_DWORD *)v7;
      v7 = (const Caver::Matrix4 *)((char *)v7 + 4);
      *v6++ = v16;
    }
    while ( (unsigned __int64)v6 < v2 );
    goto LABEL_14;
  }
  if ( v2 > v3 )
    v3 = this + 260;
  v8 = v3 + -197 - this;
  if ( v6 < (_DWORD *)((char *)a2 + (v8 & 0xFFFFFFFFFFFFFFFCLL) + 4) )
  {
    v9 = this + ((v8 + 200) & 0xFFFFFFFFFFFFFFFCLL) > (unsigned __int64)a2;
    v7 = a2;
    if ( v9 )
      goto LABEL_13;
  }
  v10 = 4 * (v5 & 0x7FFFFFFFFFFFFFF8LL);
  v7 = (const Caver::Matrix4 *)((char *)a2 + v10);
  v11 = (_OWORD *)(this + 212);
  v6 = (_DWORD *)(this + v10 + 196);
  v12 = (__int128 *)((char *)a2 + 16);
  v13 = v5 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v14 = *(v12 - 1);
    v15 = *v12;
    v13 -= 8;
    v12 += 2;
    *(v11 - 1) = v14;
    *v11 = v15;
    v11 += 2;
  }
  while ( v13 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_13;
LABEL_14:
  if ( *(_DWORD *)this )
  {
    *(_BYTE *)(this + 128) = 1;
  }
  else
  {
    glMatrixMode();
    glLoadMatrixf();
    return glMatrixMode();
  }
  return this;
}

