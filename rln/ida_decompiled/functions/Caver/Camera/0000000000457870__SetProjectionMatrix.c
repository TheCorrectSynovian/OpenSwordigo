/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457870
 * Mangled: _ZN5Caver6Camera19SetProjectionMatrixERKNS_7Matrix4E
 * Demangled: Caver::Camera::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202F30  Caver::Matrix4::InverseEx(void)
 *
 * Referenced strings: 48
 *   insn=0x0000000000457884 string=0x0000000000457888 "h"
 *   insn=0x0000000000457888 string=0x000000000045788C "i"
 *   insn=0x0000000000457894 string=0x0000000000457898 "T"
 *   insn=0x0000000000457898 string=0x000000000045789C "K"
 *   insn=0x000000000045789C string=0x00000000004578A0 "\n"
 *   insn=0x00000000004578A4 string=0x00000000004578A8 "J"
 *   insn=0x00000000004578A8 string=0x00000000004578AC "J"
 *   insn=0x00000000004578AC string=0x00000000004578B0 "J"
 *   insn=0x00000000004578B0 string=0x00000000004578B4 "_!"
 *   insn=0x00000000004578B4 string=0x00000000004578B8 "`"
 *   insn=0x00000000004578C4 string=0x00000000004578C8 "\t"
 *   insn=0x00000000004578C8 string=0x00000000004578CC ")"
 *   insn=0x00000000004578CC string=0x00000000004578D0 "+"
 *   insn=0x00000000004578D0 string=0x00000000004578D4 "+"
 *   insn=0x00000000004578D4 string=0x00000000004578D8 "k"
 *   insn=0x00000000004578DC string=0x00000000004578E0 "B"
 *   insn=0x00000000004578E0 string=0x00000000004578E4 ")"
 *   insn=0x00000000004578E0 string=0x00000000004579C8 "L"
 *   insn=0x00000000004578E4 string=0x00000000004578E8 ")"
 *   insn=0x00000000004578E8 string=0x00000000004578EC "i"
 *   insn=0x00000000004578EC string=0x00000000004578F0 "?"
 *   insn=0x00000000004578FC string=0x0000000000457900 "*E@"
 *   insn=0x0000000000457900 string=0x0000000000457904 "jE"
 *   insn=0x0000000000457918 string=0x000000000045791C "h"
 *   insn=0x000000000045791C string=0x0000000000457920 "i"
 *   insn=0x0000000000457928 string=0x000000000045792C "\t"
 *   insn=0x000000000045792C string=0x0000000000457930 "J"
 *   insn=0x0000000000457930 string=0x0000000000457934 ")"
 *   insn=0x0000000000457934 string=0x0000000000457938 ")"
 *   insn=0x0000000000457938 string=0x000000000045793C "+"
 *   insn=0x0000000000457944 string=0x0000000000457948 "i"
 *   insn=0x0000000000457944 string=0x0000000000457954 "l"
 *   insn=0x0000000000457950 string=0x0000000000457994 "KE@"
 *   insn=0x000000000045795C string=0x0000000000457960 "i"
 *   insn=0x0000000000457960 string=0x0000000000457964 "mB"
 *   insn=0x0000000000457964 string=0x0000000000457968 ")"
 *   insn=0x0000000000457984 string=0x0000000000457988 "a"
 *   insn=0x0000000000457994 string=0x0000000000457998 "+E"
 *   insn=0x0000000000457998 string=0x000000000045799C "?"
 *   insn=0x00000000004579B0 string=0x0000000000457A0C "1z"
 *   insn=0x00000000004579CC string=0x00000000004579D0 ")"
 *   insn=0x00000000004579D0 string=0x00000000004579D4 "k"
 *   insn=0x00000000004579D4 string=0x00000000004579D8 "m"
 *   insn=0x00000000004579D8 string=0x00000000004579DC "k"
 *   insn=0x00000000004579DC string=0x00000000004579E0 ".@"
 *   insn=0x00000000004579F8 string=0x00000000004579FC "a"
 *   insn=0x00000000004579FC string=0x0000000000457A00 "_"
 *   insn=0x0000000000457A0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Camera::SetProjectionMatrix(Caver::Camera *this, const Caver::Matrix4 *a2)
{
  char *v3; // x8
  char *v4; // x9
  unsigned __int64 StatusReg; // x20
  __int64 v6; // x11
  char *v7; // x10
  unsigned __int64 v8; // x10
  Caver::Matrix4 *v9; // x0
  unsigned __int64 v10; // x9
  const Caver::Matrix4 *v11; // x9
  char *v12; // x11
  int v13; // t1
  __int64 *result; // x0
  char *v15; // x9
  unsigned __int64 v16; // x11
  char *v17; // x9
  __int64 *v18; // x10
  __int64 v19; // x9
  _OWORD *v20; // x13
  __int128 *v21; // x14
  __int64 v22; // x15
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // t1
  __int64 v26; // x11
  _OWORD *v27; // x13
  __int128 *v28; // x14
  __int64 v29; // x15
  __int128 v30; // q0
  __int128 v31; // q1
  __int64 v32[2]; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v33[7]; // [xsp+18h] [xbp-58h] BYREF

  v3 = (char *)this + 172;
  v4 = (char *)this + 112;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v6 = -109LL - (_QWORD)this;
  if ( (char *)this + 172 <= (char *)this + 112 )
    v7 = (char *)this + 112;
  else
    v7 = (char *)this + 172;
  v8 = ((unsigned __int64)&v7[v6] >> 2) + 1;
  v9 = (Caver::Camera *)((char *)this + 108);
  v33[6] = *(_QWORD *)(StatusReg + 40);
  if ( v8 < 8 )
    goto LABEL_9;
  if ( v3 > v4 )
    v4 = v3;
  v10 = (unsigned __int64)&v4[v6];
  if ( v9 < (const Caver::Matrix4 *)((char *)a2 + (v10 & 0xFFFFFFFFFFFFFFFCLL) + 4)
    && (Caver::Camera *)((char *)this + ((v10 + 112) & 0xFFFFFFFFFFFFFFFCLL)) > a2 )
  {
LABEL_9:
    v11 = a2;
    v12 = (char *)this + 108;
    do
    {
LABEL_10:
      v13 = *(_DWORD *)v11;
      v11 = (const Caver::Matrix4 *)((char *)v11 + 4);
      *(_DWORD *)v12 = v13;
      v12 += 4;
    }
    while ( v12 < v3 );
    goto LABEL_11;
  }
  v26 = 4 * (v8 & 0x7FFFFFFFFFFFFFF8LL);
  v11 = (const Caver::Matrix4 *)((char *)a2 + v26);
  v27 = (_OWORD *)((char *)this + 124);
  v12 = (char *)this + v26 + 108;
  v28 = (__int128 *)((char *)a2 + 16);
  v29 = v8 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v30 = *(v28 - 1);
    v31 = *v28;
    v29 -= 8;
    v28 += 2;
    *(v27 - 1) = v30;
    *v27 = v31;
    v27 += 2;
  }
  while ( v29 );
  if ( v8 != (v8 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_10;
LABEL_11:
  result = Caver::Matrix4::InverseEx(v32, v9);
  v15 = (char *)this + 260;
  if ( (char *)this + 320 > (char *)this + 260 )
    v15 = (char *)this + 320;
  v16 = ((unsigned __int64)&v15[-257LL - (_QWORD)this] >> 2) + 1;
  if ( v16 < 8 )
  {
    v17 = (char *)this + 256;
    v18 = v32;
    do
    {
LABEL_18:
      v25 = *(_DWORD *)v18;
      v18 = (__int64 *)((char *)v18 + 4);
      *(_DWORD *)v17 = v25;
      v17 += 4;
    }
    while ( v17 < (char *)this + 320 );
    return result;
  }
  v19 = 4 * (v16 & 0x7FFFFFFFFFFFFFF8LL);
  v18 = (__int64 *)((char *)v32 + v19);
  v20 = (_OWORD *)((char *)this + 272);
  v17 = (char *)this + v19 + 256;
  v21 = (__int128 *)v33;
  v22 = v16 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v23 = *(v21 - 1);
    v24 = *v21;
    v22 -= 8;
    v21 += 2;
    *(v20 - 1) = v23;
    *v20 = v24;
    v20 += 2;
  }
  while ( v22 );
  if ( v16 != (v16 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_18;
  return result;
}

