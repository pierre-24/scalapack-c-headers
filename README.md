# `cblacs-header.py`

Create the missing "cblacs.h" header to use BLACS in C.

## Quickstart

If you just want the header, download the header here: [`cblacs.h`](https://github.com/pierre-24/cblacs-header/releases/download/latest/cblacs.h).

You can use two convention:

| Convention                                                                                               | Example                                              |
|----------------------------------------------------------------------------------------------------------|------------------------------------------------------|
| C call convention (functions are of the form `Cxxx()`, and inputs are passed by value).                  | [`test_cblacs_ccall.h`](./tests/test_cblacs_ccall.c) |
| Fortran call convention (functions are of the form `xxx_()`, and all arguments are passed via pointers). | [`test_cblacs_fcall.h`](./tests/test_cblacs_fcall.c) |

## Install & use

Requirements:

+ Python, and
+ Git.

Installation:

```bash
# clone scalapack
git clone https://github.com/Reference-ScaLAPACK/scalapack.git

# clone this repository
git clone https://github.com/pierre-24/cblacs-header.git
cd cblacs-header

# virtualenv
python -m venv venv
source venv/bin/activate
make install  # or pip install -r requirements.txt
```

Usage:

```bash
python cblacs-header.py ../scalapack
```

After that, a `cblacs.h` header should appear in the directory.