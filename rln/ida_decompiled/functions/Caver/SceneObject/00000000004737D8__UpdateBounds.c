/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004737D8
 * Mangled: _ZN5Caver11SceneObject12UpdateBoundsEv
 * Demangled: Caver::SceneObject::UpdateBounds(void)
 *
 * Callers: 1
 *   0x00000000001F9FB0  Caver::SceneObject::UpdateBounds(void)
 *
 * Callees: 3
 *   0x00000000001F5430  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 35
 *   insn=0x00000000004737F0 string=0x00000000004737F4 "T"
 *   insn=0x0000000000473800 string=0x0000000000473804 "`B"
 *   insn=0x0000000000473808 string=0x000000000047380C "uZL"
 *   insn=0x000000000047381C string=0x0000000000473820 ""
 *   insn=0x0000000000473820 string=0x0000000000473824 "m@"
 *   insn=0x0000000000473830 string=0x0000000000473834 "X"
 *   insn=0x0000000000473838 string=0x000000000047383C ""
 *   insn=0x000000000047383C string=0x0000000000473840 "\tq@"
 *   insn=0x0000000000473844 string=0x0000000000473848 " "
 *   insn=0x0000000000473850 string=0x0000000000473854 "k"
 *   insn=0x0000000000473854 string=0x00000000001F6E00 "0'"
 *   insn=0x0000000000473858 string=0x000000000047385C "h"
 *   insn=0x000000000047385C string=0x0000000000473860 ""
 *   insn=0x0000000000473860 string=0x0000000000473864 "u@"
 *   insn=0x0000000000473870 string=0x0000000000473874 "`"
 *   insn=0x0000000000473878 string=0x00000000004738C0 "`"
 *   insn=0x000000000047387C string=0x0000000000473880 ""
 *   insn=0x0000000000473880 string=0x0000000000473884 "\tq@"
 *   insn=0x0000000000473888 string=0x000000000047388C " "
 *   insn=0x0000000000473898 string=0x000000000047389C ""
 *   insn=0x000000000047389C string=0x00000000004738A0 "u@"
 *   insn=0x00000000004738A4 string=0x00000000004738A8 "`"
 *   insn=0x00000000004738B0 string=0x00000000004738B4 ""
 *   insn=0x00000000004738B4 string=0x00000000004738B8 "u@"
 *   insn=0x00000000004738C4 string=0x00000000004738C8 "h"
 *   insn=0x00000000004738C8 string=0x00000000004738CC ""
 *   insn=0x00000000004738CC string=0x00000000004738D0 "y@"
 *   insn=0x00000000004738D8 string=0x00000000004738DC "m"
 *   insn=0x00000000004738DC string=0x00000000004738E0 "`"
 *   insn=0x00000000004738E8 string=0x00000000004738EC ""
 *   insn=0x00000000004738EC string=0x00000000004738F0 "y@"
 *   insn=0x00000000004738F8 string=0x00000000004738FC "`"
 *   insn=0x0000000000473914 string=0x00000000001F5430 "P'"
 *   insn=0x0000000000473924 string=0x0000000000473944 "c\n"
 *   insn=0x0000000000473944 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::UpdateBounds(Caver::SceneObject *this)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x22
  int v4; // w24
  float v5; // s8
  float v6; // s0
  float v7; // s8
  float v8; // s0
  __int128 v10; // [xsp+0h] [xbp-70h] BYREF
  __int128 v11; // [xsp+10h] [xbp-60h] BYREF
  __int64 v12; // [xsp+28h] [xbp-48h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = *(_OWORD *)((char *)this + 148);
  v2 = (_QWORD *)*((_QWORD *)this + 24);
  v3 = (_QWORD *)*((_QWORD *)this + 25);
  if ( v2 != v3 )
  {
    v4 = 0;
    while ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 216LL))(*v2) & 1) == 0 )
    {
LABEL_13:
      if ( v3 == ++v2 )
        return Caver::SceneObject::setLocalAABB(this, (const Caver::Rectangle *)&v11);
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(__int128 *__return_ptr))(*(_QWORD *)*v2 + 224LL))(&v10);
      Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v11, (const Caver::Rectangle *)&v10);
      v5 = *((float *)this + 46);
      if ( v5 >= (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 232LL))(*v2) )
        v6 = (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 232LL))(*v2);
      else
        v6 = *((float *)this + 46);
      *((float *)this + 46) = v6;
      v7 = *((float *)this + 47);
      if ( v7 > (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 240LL))(*v2) )
      {
        v8 = *((float *)this + 47);
LABEL_12:
        ++v4;
        *((float *)this + 47) = v8;
        goto LABEL_13;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int128 *__return_ptr))(*(_QWORD *)*v2 + 224LL))(&v10);
      v11 = v10;
      *((float *)this + 46) = (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 232LL))(*v2);
    }
    v8 = (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 240LL))(*v2);
    goto LABEL_12;
  }
  return Caver::SceneObject::setLocalAABB(this, (const Caver::Rectangle *)&v11);
}

