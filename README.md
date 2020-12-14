# Compression 
This is personal Repository to explore the field of compression and implement compression algorithms for 
- [ ] Text
- [ ] Audio
- [ ] Video
- [ ] Miscellaneous

## Approach
For the first few days I indent to start educating myself on the theorotical aspects of compression and update this README regularly and then move on move on to the application phase.

At this moment the project is divided in 2 phases
1. Theorotical Concepts
2. Implementation

For Implementation I am intending to use C++ and maybe Java

## Scope
I intend to create a complete terminal based tool to compress various kinds file fomats and in future make Web Application based on this.

## Introduction To Data Compression
This is process of encoding the information in fewer bits than the orignal information allowing us to save resouces. Data compression can divided into two wide categories.
1. Lossy Compression
2. Lossless Compression

Lossless compression works by identifying the and eliminating [statistical redundancy](http://www-math.ucdenver.edu/~wcherowi/courses/m5410/m5410lc1.html). Whereas In contrast to this Lossy compression works by removing less important information and constructing an approximation of the overall orignal data.

The design of decompression schemes deals with managing tradeoff among various factors such as degree of compression , computation resource and cost and data loss ( in case of Lossy ).

## Information Theory Basics
In information security the data is seen as a source of information and information of the data is described as in direct proportion to the randomness of the system. So in a complete random system the information is 1. Where as data from a predictable system is nearly zero.
By this basic definition of information we can define.
1. <b>Lossy Compression</b>:Data can not be compressed to it's orignal value.
2.  <b>Lossless Compression</b>: Losslessly compressed data can be decompressed to exactly its original value.

All data compression models are made up of 2 main parts 
1. Model 
2. Coder

Now the main job of data <b>modeler</b> is to create probability distribution of a particular symbol and <b>coder</b> assigns optimum code to every single symbol as to reduce the size of the file while still holding the same amount of information.
Information theory places hard limits on what can and cannot be compressed losslessly, and by how much:

1. There is no such thing as a "universal" compression algorithm that is guaranteed to compress any input, or even any input above a certain size. In particular, it is not possible to compress random data or compress recursively.
2. Given a model (probability distribution) of your input data, the best you can do is code symbols with probability p using log2 1/p bits. Efficient and optimal codes are known.
3. Data has a universal but uncomputable probability distribution. Specifically, any string x has probability (about) 2-|M| where M is the shortest possible description of x, and |M| is the length of M in bits, almost independent of the language in which M is written. However there is no general procedure for finding M or even estimating |M| in any language. There is no algorithm that tests for randomness or tells you whether a string can be compressed any further.
   
In summary Compression = modeling + coding. Coding is a solved problem. Modeling is provably not solvable.

The theorotical Implementation and explanation of both Coders and Modellers are In seperate directories with their respective README.
## Sources
- http://mattmahoney.net/dc/dce.html
- https://en.wikipedia.org/wiki/Data_compression



