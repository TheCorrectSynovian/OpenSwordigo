/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C86AC
 * Mangled: _ZN5Caver6Sprite8AddFacesEiPt
 * Demangled: Caver::Sprite::AddFaces(int,ushort *)
 *
 * Callers: 1
 *   0x00000000001FD1A0  Caver::Sprite::AddFaces(int,ushort *)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 29
 *   insn=0x00000000004C86C4 string=0x00000000004C86C8 "hfC)"
 *   insn=0x00000000004C86D0 string=0x00000000004C86D4 "8"
 *   insn=0x00000000004C86D8 string=0x00000000004C86DC "M"
 *   insn=0x00000000004C86DC string=0x00000000004C8764 "h"
 *   insn=0x00000000004C86E4 string=0x00000000004C86E8 ""
 *   insn=0x00000000004C86E4 string=0x00000000004C8738 "`"
 *   insn=0x00000000004C86E8 string=0x00000000004C86EC "}@"
 *   insn=0x00000000004C86EC string=0x00000000004C86F0 ""
 *   insn=0x00000000004C86F8 string=0x00000000004C86FC "?"
 *   insn=0x00000000004C86F8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C8704 string=0x00000000004C8708 ""
 *   insn=0x00000000004C8708 string=0x00000000004C870C "W"
 *   insn=0x00000000004C8708 string=0x00000000004C8748 "W"
 *   insn=0x00000000004C870C string=0x00000000004C8710 "?"
 *   insn=0x00000000004C8710 string=0x00000000004C8714 ""
 *   insn=0x00000000004C8714 string=0x00000000004C8718 ""
 *   insn=0x00000000004C8728 string=0x00000000004C872C "V"
 *   insn=0x00000000004C872C string=0x00000000004C8730 "7"
 *   insn=0x00000000004C8730 string=0x00000000004C8734 "\n"
 *   insn=0x00000000004C8734 string=0x00000000004C875C "y"
 *   insn=0x00000000004C8748 string=0x00000000004C874C "V"
 *   insn=0x00000000004C874C string=0x00000000004C8750 "w"
 *   insn=0x00000000004C8758 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C875C string=0x00000000004C8760 "x"
 *   insn=0x00000000004C8764 string=0x00000000004C8768 ")"
 *   insn=0x00000000004C876C string=0x00000000004C8770 "B}"
 *   insn=0x00000000004C877C string=0x00000000004C8780 "h"
 *   insn=0x00000000004C8780 string=0x00000000004C8784 ""
 *   insn=0x00000000004C8784 string=0x00000000004C8788 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Sprite::AddFaces(Caver::Sprite *this, int a2, unsigned __int16 *a3)
{
  int v4; // w25
  int v7; // w24
  __int64 v8; // x8
  bool v9; // cf
  __int64 v10; // x8
  unsigned __int64 v11; // x0
  void *v12; // x0
  void *v13; // x22
  const void *v14; // x23
  int v15; // w8
  void *v16; // x0
  void *result; // x0

  v4 = *((_DWORD *)this + 7);
  v7 = v4 + a2;
  if ( v4 + a2 > *((_DWORD *)this + 6) )
  {
    if ( v7 < 1 )
    {
      v16 = (void *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0;
      if ( !v16 )
        goto LABEL_17;
    }
    else
    {
      v8 = 3 * v7;
      v9 = __CFADD__(v8, v8);
      v10 = 2 * v8;
      if ( v9 )
        v11 = -1;
      else
        v11 = v10;
      v12 = (void *)operator new[](v11);
      v13 = v12;
      if ( v4 <= 0 )
      {
        v14 = (const void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 4) = v12;
        if ( !v14 )
        {
LABEL_17:
          v4 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 6) = v7;
          goto LABEL_18;
        }
      }
      else
      {
        v14 = (const void *)*((_QWORD *)this + 4);
        if ( v4 <= v7 )
          v15 = v4;
        else
          v15 = v7;
        memcpy(v12, v14, 6LL * v15);
        *((_QWORD *)this + 4) = v13;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (void *)v14;
    }
    operator delete[](v16);
    goto LABEL_17;
  }
LABEL_18:
  result = memcpy((void *)(*((_QWORD *)this + 4) + 6LL * v4), a3, 6LL * a2);
  *((_DWORD *)this + 7) += a2;
  return result;
}

