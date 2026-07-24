/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7a4c
 * Function: google::protobuf::internal::Mutex::Lock
 * Signature: undefined __thiscall Lock(Mutex * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005d7b00) */
/* WARNING: Removing unreachable block (ram,0x005d7b3c) */
/* WARNING: Removing unreachable block (ram,0x005d7b64) */
/* WARNING: Removing unreachable block (ram,0x005d7b9c) */
/* WARNING: Removing unreachable block (ram,0x005d7bc0) */
/* WARNING: Removing unreachable block (ram,0x005d7bac) */
/* WARNING: Removing unreachable block (ram,0x005d7bb4) */
/* WARNING: Removing unreachable block (ram,0x005d7bbc) */
/* WARNING: Removing unreachable block (ram,0x005d7bcc) */
/* WARNING: Removing unreachable block (ram,0x005d7bd4) */
/* google::protobuf::internal::Mutex::Lock() */

void __thiscall google::protobuf::internal::Mutex::Lock(Mutex *this)

{
  long lVar1;
  int __errnum;
  char *__s;
  size_t sVar2;
  undefined *local_58 [2];
  long local_48;
  
                    /* try { // try from 005d7a54 to 006d7a57 has its CatchHandler @ 005d7af8 */
                    /* catch() { ... } // from try @ 005d79d4 with catch @ 005d7a58 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __errnum = pthread_mutex_lock(*(pthread_mutex_t **)this);
  if (__errnum != 0) {
                    /* try { // try from 005d7a8c to 006d7ab3 has its CatchHandler @ 005d7ad8 */
    local_58[0] = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 005d7ab4 to 006d7b63 has its CatchHandler @ 005d78f8 */
    FUN_006677d4(local_58,"pthread_mutex_lock: ",0x14);
    __s = strerror(__errnum);
                    /* catch() { ... } // from try @ 005d7a8c with catch @ 005d7ad8 */
    sVar2 = strlen(__s);
    FUN_006677d4(local_58,__s,sVar2);
                    /* catch() { ... } // from try @ 005d794c with catch @ 005d7af8
                       catch() { ... } // from try @ 005d7a54 with catch @ 005d7af8 */
    (*(code *)PTR_DefaultLogHandler_007e8900)
              (3,"./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc",300,
               local_58);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


