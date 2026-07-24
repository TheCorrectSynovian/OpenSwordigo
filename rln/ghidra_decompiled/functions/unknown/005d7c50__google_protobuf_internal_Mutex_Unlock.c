/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7c50
 * Function: google::protobuf::internal::Mutex::Unlock
 * Signature: undefined __thiscall Unlock(Mutex * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005d7d04) */
/* WARNING: Removing unreachable block (ram,0x005d7d40) */
/* WARNING: Removing unreachable block (ram,0x005d7d68) */
/* WARNING: Removing unreachable block (ram,0x005d7da0) */
/* WARNING: Removing unreachable block (ram,0x005d7dc4) */
/* WARNING: Removing unreachable block (ram,0x005d7db0) */
/* WARNING: Removing unreachable block (ram,0x005d7db8) */
/* WARNING: Removing unreachable block (ram,0x005d7dc0) */
/* WARNING: Removing unreachable block (ram,0x005d7dd0) */
/* WARNING: Removing unreachable block (ram,0x005d7dd8) */
/* google::protobuf::internal::Mutex::Unlock() */

void __thiscall google::protobuf::internal::Mutex::Unlock(Mutex *this)

{
  long lVar1;
  int __errnum;
  char *__s;
  size_t sVar2;
  undefined *local_58 [2];
  long local_48;
  
                    /* try { // try from 005d7c60 to 006d7d8f has its CatchHandler @ 005d7c60
                       catch() { ... } // from try @ 005d7c60 with catch @ 005d7c60
                       catch() { ... } // from try @ 005d7ddc with catch @ 005d7c60
                       catch() { ... } // from try @ 005d7e64 with catch @ 005d7c60
                       catch() { ... } // from try @ 005d7f78 with catch @ 005d7c60
                       catch() { ... } // from try @ 005d801c with catch @ 005d7c60 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __errnum = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  if (__errnum != 0) {
    local_58[0] = PTR_DAT_007e5de8 + 0x18;
    FUN_006677d4(local_58,"pthread_mutex_unlock: ",0x16);
    __s = strerror(__errnum);
    sVar2 = strlen(__s);
    FUN_006677d4(local_58,__s,sVar2);
    (*(code *)PTR_DefaultLogHandler_007e8900)
              (3,"./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc",0x133,
               local_58);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d7d90 to 006d7da3 has its CatchHandler @ 005d7fd4 */
  return;
}


