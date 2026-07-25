/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2868
 * Mangled: _ZN5Caver5Image6ResizeEii
 * Demangled: Caver::Image::Resize(int,int)
 *
 * Callers: 1
 *   0x00000000001FB6C0  Caver::Image::Resize(int,int)
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8DE0  Caver::Image::GetPixel(int,int)
 *   0x00000000001FDAA0  Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *   0x0000000000201760  .memcpy
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000004D2884 string=0x00000000004D2888 "Y"
 *   insn=0x00000000004D2888 string=0x00000000004D288C "("
 *   insn=0x00000000004D289C string=0x00000000004D28A0 "h"
 *   insn=0x00000000004D28A4 string=0x00000000004D28A8 "z"
 *   insn=0x00000000004D28AC string=0x00000000004D28B0 "`"
 *   insn=0x00000000004D28B4 string=0x00000000004D28B8 "x"
 *   insn=0x00000000004D28C8 string=0x00000000004D28CC ")"
 *   insn=0x00000000004D28CC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D28D4 string=0x00000000004D28D8 "w"
 *   insn=0x00000000004D28E8 string=0x00000000004D28EC "v"
 *   insn=0x00000000004D28EC string=0x00000000004D28F0 ""
 *   insn=0x00000000004D28F0 string=0x00000000004D28F4 ""
 *   insn=0x00000000004D28FC string=0x00000000004D2900 ")"
 *   insn=0x00000000004D2900 string=0x00000000004D2908 "("
 *   insn=0x00000000004D2914 string=0x00000000004D2918 ")}h&"
 *   insn=0x00000000004D2918 string=0x00000000004D291C "h&"
 *   insn=0x00000000004D291C string=0x00000000004D2920 "(}@"
 *   insn=0x00000000004D292C string=0x00000000004D2930 "`"
 *   insn=0x00000000004D293C string=0x00000000004D2940 "u\n@"
 *   insn=0x00000000004D293C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D2944 string=0x00000000004D2948 "K"
 *   insn=0x00000000004D2948 string=0x00000000004D294C "h"
 *   insn=0x00000000004D2954 string=0x00000000004D2958 "k"
 *   insn=0x00000000004D2978 string=0x00000000001F8DE0 "0'"
 *   insn=0x00000000004D2988 string=0x00000000004D298C "E"
 *   insn=0x00000000004D298C string=0x00000000004D2990 "h"
 *   insn=0x00000000004D298C string=0x00000000001FDAA0 "0'"
 *   insn=0x00000000004D299C string=0x00000000004D29A0 "K"
 *   insn=0x00000000004D29A8 string=0x00000000004D29AC "K"
 *   insn=0x00000000004D29B0 string=0x00000000004D29B4 "k"
 *   insn=0x00000000004D29B4 string=0x00000000004D29B8 "("
 *   insn=0x00000000004D29C0 string=0x00000000004D29C4 "!"
 *   insn=0x00000000004D29C4 string=0x00000000004D29E8 ":"
 *   insn=0x00000000004D29E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D29F0 string=0x00000000004D29F4 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Image::Resize(Caver::Image *this, int a2, int a3)
{
  int v6; // w26
  int v7; // w27
  signed __int64 v8; // x24
  unsigned __int64 v9; // x0
  void *v10; // x20
  void *v11; // x23
  int v12; // w8
  int v13; // w9
  unsigned __int64 v14; // x0
  int v15; // w8
  int v16; // w22
  int v17; // w24
  int i; // w23
  int v19; // [xsp+0h] [xbp-A0h]
  __int64 v20[2]; // [xsp+18h] [xbp-88h] BYREF
  _BYTE v21[4]; // [xsp+28h] [xbp-78h] BYREF
  int v22; // [xsp+2Ch] [xbp-74h]
  int v23; // [xsp+30h] [xbp-70h]
  __int64 v24; // [xsp+34h] [xbp-6Ch]
  int v25; // [xsp+3Ch] [xbp-64h]
  void *v26; // [xsp+40h] [xbp-60h]
  __int64 v27; // [xsp+48h] [xbp-58h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v21[0] = *(_BYTE *)this;
  v6 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 2);
  v22 = v6;
  v23 = v7;
  v24 = *(_QWORD *)((char *)this + 12);
  v8 = *((int *)this + 5);
  v19 = v24;
  if ( v8 < 0 )
    v9 = -1;
  else
    v9 = *((int *)this + 5);
  v25 = v8;
  v10 = (void *)operator new[](v9);
  v26 = v10;
  v11 = (void *)*((_QWORD *)this + 3);
  memcpy(v10, v11, v8);
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = a3;
  if ( (unsigned int)(v19 - 1) > 7 )
    v12 = 0;
  else
    v12 = dword_598170[v19 - 1];
  v13 = a3 * a2 * v12;
  *((_DWORD *)this + 4) = v12;
  *((_DWORD *)this + 5) = v13;
  if ( v13 < 0LL )
    v14 = -1;
  else
    v14 = v13;
  *((_QWORD *)this + 3) = operator new[](v14);
  if ( v11 )
  {
    operator delete[](v11);
    a3 = *((_DWORD *)this + 2);
  }
  if ( a3 >= 1 )
  {
    v15 = *((_DWORD *)this + 1);
    v16 = 0;
    do
    {
      if ( v15 >= 1 )
      {
        v17 = 0;
        for ( i = 0; i < v15; ++i )
        {
          Caver::Image::GetPixel(v20, (Caver::Image *)v21, v17 / v15, v16 * v7 / a3);
          Caver::Image::SetPixel(this, i, v16, (const Caver::FloatColor *)v20);
          v15 = *((_DWORD *)this + 1);
          a3 = *((_DWORD *)this + 2);
          v17 += v6;
        }
      }
      ++v16;
    }
    while ( v16 < a3 );
  }
  operator delete[](v10);
}

