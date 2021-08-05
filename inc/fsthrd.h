#pragma once

/*Threaded functions for copying files.
  file.cpp has wrapper functions for these.
  No need to call directly.*/
namespace fs
{
    void _fileDrawFunc(void *a);
    void copyfile_t(void *a);
    void copyFileCommit_t(void *a);
    void copyDirToZip_t(void *a);
    void copyZipToDir_t(void *a);
    void wipesave_t(void *a);
    void closeZip_t(void *a);
}