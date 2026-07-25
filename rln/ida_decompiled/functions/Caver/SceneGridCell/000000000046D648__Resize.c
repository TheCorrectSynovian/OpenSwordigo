/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D648
 * Mangled: _ZN5Caver13SceneGridCell6ResizeEi
 * Demangled: Caver::SceneGridCell::Resize(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5E70  .malloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 9
 *   insn=0x000000000046D65C string=0x000000000046D660 "`~}"
 *   insn=0x000000000046D664 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000046D670 string=0x000000000046D674 "M"
 *   insn=0x000000000046D67C string=0x000000000046D680 "j"
 *   insn=0x000000000046D684 string=0x000000000046D688 ")"
 *   insn=0x000000000046D690 string=0x000000000046D694 "3P"
 *   insn=0x000000000046D698 string=0x000000000046D69C "v"
 *   insn=0x000000000046D6A0 string=0x000000000046D6A4 "/"
 *   insn=0x000000000046D6A4 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridCell::Resize(Caver::SceneGridCell *this, int a2)
{
  char *v4; // x0
  __int64 v5; // x8
  char *v6; // x21
  void *v7; // x22

  v4 = (char *)malloc(8LL * a2);
  v5 = *((int *)this + 2);
  v6 = v4;
  if ( (int)v5 <= 0 )
  {
    v7 = *(void **)this;
    *(_QWORD *)this = v4;
    if ( !v7 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v7 = *(void **)this;
  memcpy(&v4[8 * (a2 - (int)v5)], (const void *)(*(_QWORD *)this + 8LL * (*((_DWORD *)this + 3) - (int)v5)), 8 * v5);
  *(_QWORD *)this = v6;
  if ( v7 )
LABEL_3:
    operator delete[](v7);
LABEL_4:
  *((_DWORD *)this + 3) = a2;
}

