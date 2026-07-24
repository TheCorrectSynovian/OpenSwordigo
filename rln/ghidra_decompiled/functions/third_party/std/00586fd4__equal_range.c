/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00586fd4
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range
 * Signature: undefined __thiscall equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::intrusive_ptr<Caver::SoundEffect>
   >, std::_Select1st<std::pair<std::string const, boost::intrusive_ptr<Caver::SoundEffect> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SoundEffect> > > >::equal_range(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
::equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
              *this,string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var6;
  void *__s2;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var7;
  ulong uVar8;
  size_t __n;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var9;
  undefined1 auVar10 [16];
  
                    /* catch() { ... } // from try @ 005869a0 with catch @ 00586fdc */
                    /* catch() { ... } // from try @ 005868cc with catch @ 00586fe0 */
  p_Var5 = this + 8;
  p_Var7 = p_Var5;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s2 + -0x18);
    p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
               **)(this + 0x10);
LAB_00587010:
    do {
      __s1 = *(void **)(p_Var6 + 0x20);
      __n = *(ulong *)((long)__s1 + -0x18);
      lVar1 = __n - uVar8;
      sVar4 = uVar8;
      if (__n < uVar8 || lVar1 == 0) {
        sVar4 = __n;
      }
      iVar2 = memcmp(__s1,__s2,sVar4);
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto joined_r0x00587054;
        }
LAB_00587058:
        lVar1 = uVar8 - __n;
        if (uVar8 < __n || lVar1 == 0) {
          __n = uVar8;
        }
        iVar2 = memcmp(__s2,__s1,__n);
        if (iVar2 == 0) {
          if (lVar1 < 0x80000000) {
            iVar2 = (int)lVar1;
            if (lVar1 < -0x7fffffff) {
              iVar2 = -0x80000000;
            }
            goto LAB_00587080;
          }
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                     **)(p_Var6 + 0x10);
        }
        else {
LAB_00587080:
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                     **)(p_Var6 + 0x10);
                    /* catch() { ... } // from try @ 00586598 with catch @ 00587084 */
          if (iVar2 < 0) {
                    /* catch() { ... } // from try @ 00586b0c with catch @ 00587088 */
            p_Var5 = p_Var6;
            p_Var7 = p_Var6;
            p_Var6 = p_Var9;
            if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                           *)0x0) break;
            goto LAB_00587010;
          }
        }
        p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                   **)(p_Var6 + 0x18);
        goto joined_r0x005870c4;
      }
joined_r0x00587054:
      if (-1 < iVar2) goto LAB_00587058;
                    /* catch() { ... } // from try @ 0058662c with catch @ 00587034 */
      p_Var9 = p_Var6 + 0x18;
      p_Var7 = p_Var5;
      p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 **)p_Var9;
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
               **)p_Var9 !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
              *)0x0);
  }
LAB_00587098:
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var7;
  return auVar10;
joined_r0x005870c4:
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 *)0x0) {
    do {
                    /* catch() { ... } // from try @ 00586da4 with catch @ 005870d8 */
      uVar3 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar3 - uVar8;
      sVar4 = uVar8;
      if (uVar3 < uVar8 || lVar1 == 0) {
        sVar4 = uVar3;
      }
      iVar2 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar4);
      if (iVar2 == 0) {
        if (0x7fffffff < lVar1) goto LAB_00587118;
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
      }
      if (-1 < iVar2) goto LAB_00587118;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                     *)0x0) break;
    } while( true );
  }
  goto joined_r0x00587128;
LAB_00587118:
  p_Var6 = p_Var9;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
             **)(p_Var9 + 0x10);
  goto joined_r0x005870c4;
joined_r0x00587128:
  p_Var9 = p_Var7;
                    /* catch() { ... } // from try @ 00586c90 with catch @ 00587128 */
  p_Var7 = p_Var6;
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 *)0x0) {
    do {
      sVar4 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar8 - sVar4;
      if (uVar8 < sVar4 || lVar1 == 0) {
        sVar4 = uVar8;
      }
      iVar2 = memcmp(__s2,*(void **)(p_Var9 + 0x20),sVar4);
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto joined_r0x0058717c;
        }
      }
      else {
joined_r0x0058717c:
                    /* catch() { ... } // from try @ 005869c8 with catch @ 0058717c */
        if (iVar2 < 0) goto LAB_00587158;
      }
                    /* catch() { ... } // from try @ 00586978 with catch @ 00587180 */
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                     *)0x0) break;
    } while( true );
  }
  goto LAB_00587098;
LAB_00587158:
  p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
             **)(p_Var9 + 0x10);
  p_Var5 = p_Var9;
  goto joined_r0x00587128;
}


