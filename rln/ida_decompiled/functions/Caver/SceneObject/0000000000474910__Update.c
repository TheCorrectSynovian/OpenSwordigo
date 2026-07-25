/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474910
 * Mangled: _ZN5Caver11SceneObject6UpdateEfbb
 * Demangled: Caver::SceneObject::Update(float,bool,bool)
 *
 * Callers: 2
 *   0x00000000001FCC90  Caver::SceneObject::Update(float,bool,bool)
 *   0x0000000000474910  Caver::SceneObject::Update(float,bool,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x0000000000474938 string=0x000000000047493C ""
 *   insn=0x0000000000474948 string=0x000000000047494C "\n"
 *   insn=0x0000000000474958 string=0x000000000047495C "\t"
 *   insn=0x000000000047496C string=0x0000000000474970 "a@"
 *   insn=0x0000000000474978 string=0x000000000047497C "\t"
 *   insn=0x0000000000474988 string=0x000000000047498C "Y@"
 *   insn=0x0000000000474994 string=0x0000000000474998 "I"
 *   insn=0x00000000004749A0 string=0x00000000004749A4 " "
 *   insn=0x00000000004749A4 string=0x00000000004749A8 "e@"
 *   insn=0x00000000004749C0 string=0x00000000004749C4 "H"
 *   insn=0x00000000004749C4 string=0x00000000004749C8 "\t9@"
 *   insn=0x00000000004749C8 string=0x00000000004749CC "?"
 *   insn=0x00000000004749D4 string=0x00000000004749D8 "\t!@"
 *   insn=0x00000000004749D8 string=0x00000000004749DC " yv"
 *   insn=0x00000000004749E4 string=0x00000000004749FC "\t9"
 *   insn=0x00000000004749E8 string=0x00000000004749EC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::SceneObject::Update(int *this, long double a2, char a3, char a4)
{
  int *v4; // x21
  __int64 v8; // x23
  __int64 v9; // x8
  long double v10; // q9
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x22

  v4 = this;
  if ( this[54] >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = *((_QWORD *)v4 + 28);
      v10 = a2;
      v11 = *(_QWORD *)(v9 + 8 * v8);
      if ( (a3 & 1) != 0 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 192LL))(*(_QWORD *)(v9 + 8 * v8)) & 1) != 0 )
          *(float *)&v10 = *(float *)&a2;
        else
          *(float *)&v10 = 0.0;
      }
      if ( (a4 & 1) != 0 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11) & 1) != 0 )
        *(float *)&v10 = 0.016667;
      this = (int *)(*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v11 + 200LL))(v11, v10);
      ++v8;
    }
    while ( v8 < v4[54] );
  }
  v12 = *((_QWORD *)v4 + 7);
  if ( v12 && *(int *)(v12 + 56) >= 1 )
  {
    v13 = 0;
    do
    {
      this = *(int **)(*(_QWORD *)(v12 + 64) + 8 * v13);
      if ( this != v4 )
      {
        this = (int *)Caver::SceneObject::Update((Caver::SceneObject *)this, *(float *)&a2, a3 & 1, a4 & 1);
        v12 = *((_QWORD *)v4 + 7);
      }
      ++v13;
    }
    while ( v13 < *(int *)(v12 + 56) );
  }
  return this;
}

