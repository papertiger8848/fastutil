#define SET_PREV( f64, p32 )       SET_UPPER( f64, p32 )
#define SET_NEXT( f64, n32 )       SET_LOWER( f64, n32 )
#define COPY_PREV( f64, p64 )      SET_UPPER64( f64, p64 )
#define COPY_NEXT( f64, n64 )      SET_LOWER64( f64, n64 )
#define GET_PREV( f64 )            GET_UPPER( f64 )
#define GET_NEXT( f64 )            GET_LOWER( f64 )
#define SET_UPPER_LOWER( f64, up32, low32 )    f64 = ( ( up32 & 0xFFFFFFFFL ) << 32 ) | ( low32 & 0xFFFFFFFFL )
#define SET_UPPER( f64, up32 )     f64 ^= ( ( f64 ^ ( ( up32 & 0xFFFFFFFFL ) << 32 ) ) & 0xFFFFFFFF00000000L )
#define SET_LOWER( f64, low32 )    f64 ^= ( ( f64 ^ ( low32 & 0xFFFFFFFFL ) ) & 0xFFFFFFFFL )
#define SET_UPPER64( f64, up64 )   f64 ^= ( ( f64 ^ ( up64 & 0xFFFFFFFF00000000L ) ) & 0xFFFFFFFF00000000L )
#define SET_LOWER64( f64, low64 )  f64 ^= ( ( f64 ^ ( low64 & 0xFFFFFFFFL ) ) & 0xFFFFFFFFL )
#define GET_UPPER( f64 )           (int) ( f64 >>> 32 )
#define GET_LOWER( f64 )           (int) f64

/* Generic definitions */
#define Linked

#define PACKAGE it.unimi.dsi.fastutil.doubles
#define VALUE_PACKAGE it.unimi.dsi.fastutil.shorts
/* Assertions (useful to generate conditional code) */
#unassert keyclass
#assert keyclass(Double)
#unassert keys
 #assert keys(primitive)
#unassert valueclass
#assert valueclass(Short)
#unassert values
 #assert values(primitive)
/* Current type and class (and size, if applicable) */
#define KEY_TYPE double
#define VALUE_TYPE short
#define KEY_CLASS Double
#define VALUE_CLASS Short
#if #keyclass(Object) || #keyclass(Reference)
#define KEY_GENERIC_CLASS K
#define KEY_GENERIC_TYPE K
#define KEY_GENERIC <K>
#define KEY_GENERIC_WILDCARD <?>
#define KEY_EXTENDS_GENERIC <? extends K>
#define KEY_SUPER_GENERIC <? super K>
#define KEY_GENERIC_CAST (K)
#define KEY_GENERIC_ARRAY_CAST (K[])
#define KEY_GENERIC_BIG_ARRAY_CAST (K[][])
#else
#define KEY_GENERIC_CLASS KEY_CLASS
#define KEY_GENERIC_TYPE KEY_TYPE
#define KEY_GENERIC
#define KEY_GENERIC_WILDCARD
#define KEY_EXTENDS_GENERIC
#define KEY_SUPER_GENERIC
#define KEY_GENERIC_CAST
#define KEY_GENERIC_ARRAY_CAST
#define KEY_GENERIC_BIG_ARRAY_CAST
#endif
#if #valueclass(Object) || #valueclass(Reference)
#define VALUE_GENERIC_CLASS V
#define VALUE_GENERIC_TYPE V
#define VALUE_GENERIC <V>
#define VALUE_EXTENDS_GENERIC <? extends V>
#define VALUE_GENERIC_CAST (V)
#define VALUE_GENERIC_ARRAY_CAST (V[])
#else
#define VALUE_GENERIC_CLASS VALUE_CLASS
#define VALUE_GENERIC_TYPE VALUE_TYPE
#define VALUE_GENERIC
#define VALUE_EXTENDS_GENERIC
#define VALUE_GENERIC_CAST
#define VALUE_GENERIC_ARRAY_CAST
#endif
#if #keyclass(Object) || #keyclass(Reference)
#if #valueclass(Object) || #valueclass(Reference)
#define KEY_VALUE_GENERIC <K,V>
#define KEY_VALUE_EXTENDS_GENERIC <? extends K, ? extends V>
#else
#define KEY_VALUE_GENERIC <K>
#define KEY_VALUE_EXTENDS_GENERIC <? extends K>
#endif
#else
#if #valueclass(Object) || #valueclass(Reference)
#define KEY_VALUE_GENERIC <V>
#define KEY_VALUE_EXTENDS_GENERIC <? extends V>
#else
#define KEY_VALUE_GENERIC
#define KEY_VALUE_EXTENDS_GENERIC
#endif
#endif
/* Value methods */
#define KEY_VALUE doubleValue
#define VALUE_VALUE shortValue
/* Interfaces (keys) */
#define COLLECTION DoubleCollection

#define SET DoubleSet

#define HASH DoubleHash

#define SORTED_SET DoubleSortedSet

#define STD_SORTED_SET DoubleSortedSet

#define FUNCTION Double2ShortFunction
#define MAP Double2ShortMap
#define SORTED_MAP Double2ShortSortedMap
#if #keyclass(Object) || #keyclass(Reference)
#define STD_SORTED_MAP SortedMap

#define STRATEGY Strategy

#else
#define STD_SORTED_MAP Double2ShortSortedMap

#define STRATEGY PACKAGE.DoubleHash.Strategy

#endif
#define LIST DoubleList

#define BIG_LIST DoubleBigList

#define STACK DoubleStack

#define PRIORITY_QUEUE DoublePriorityQueue

#define INDIRECT_PRIORITY_QUEUE DoubleIndirectPriorityQueue

#define INDIRECT_DOUBLE_PRIORITY_QUEUE DoubleIndirectDoublePriorityQueue

#define KEY_ITERATOR DoubleIterator

#define KEY_ITERABLE DoubleIterable

#define KEY_BIDI_ITERATOR DoubleBidirectionalIterator

#define KEY_LIST_ITERATOR DoubleListIterator

#define KEY_BIG_LIST_ITERATOR DoubleBigListIterator

#define STD_KEY_ITERATOR DoubleIterator

#define KEY_COMPARATOR DoubleComparator

/* Interfaces (values) */
#define VALUE_COLLECTION ShortCollection

#define VALUE_ARRAY_SET ShortArraySet

#define VALUE_ITERATOR ShortIterator

#define VALUE_LIST_ITERATOR ShortListIterator

/* Abstract implementations (keys) */
#define ABSTRACT_COLLECTION AbstractDoubleCollection

#define ABSTRACT_SET AbstractDoubleSet

#define ABSTRACT_SORTED_SET AbstractDoubleSortedSet
#define ABSTRACT_FUNCTION AbstractDouble2ShortFunction
#define ABSTRACT_MAP AbstractDouble2ShortMap
#define ABSTRACT_FUNCTION AbstractDouble2ShortFunction
#define ABSTRACT_SORTED_MAP AbstractDouble2ShortSortedMap
#define ABSTRACT_LIST AbstractDoubleList

#define ABSTRACT_BIG_LIST AbstractDoubleBigList

#define SUBLIST DoubleSubList

#define ABSTRACT_PRIORITY_QUEUE AbstractDoublePriorityQueue

#define ABSTRACT_STACK AbstractDoubleStack

#define KEY_ABSTRACT_ITERATOR AbstractDoubleIterator

#define KEY_ABSTRACT_BIDI_ITERATOR AbstractDoubleBidirectionalIterator

#define KEY_ABSTRACT_LIST_ITERATOR AbstractDoubleListIterator

#define KEY_ABSTRACT_BIG_LIST_ITERATOR AbstractDoubleBigListIterator

#if #keyclass(Object)
#define KEY_ABSTRACT_COMPARATOR Comparator

#else
#define KEY_ABSTRACT_COMPARATOR AbstractDoubleComparator

#endif
/* Abstract implementations (values) */
#define VALUE_ABSTRACT_COLLECTION AbstractShortCollection

#define VALUE_ABSTRACT_ITERATOR AbstractShortIterator

#define VALUE_ABSTRACT_BIDI_ITERATOR AbstractShortBidirectionalIterator

/* Static containers (keys) */
#define COLLECTIONS DoubleCollections

#define SETS DoubleSets

#define SORTED_SETS DoubleSortedSets

#define LISTS DoubleLists

#define BIG_LISTS DoubleBigLists

#define MAPS Double2ShortMaps
#define FUNCTIONS Double2ShortFunctions
#define SORTED_MAPS Double2ShortSortedMaps
#define PRIORITY_QUEUES DoublePriorityQueues

#define HEAPS DoubleHeaps

#define SEMI_INDIRECT_HEAPS DoubleSemiIndirectHeaps

#define INDIRECT_HEAPS DoubleIndirectHeaps

#define ARRAYS DoubleArrays

#define BIG_ARRAYS DoubleBigArrays

#define ITERATORS DoubleIterators

#define BIG_LIST_ITERATORS DoubleBigListIterators

#define COMPARATORS DoubleComparators

/* Static containers (values) */
#define VALUE_COLLECTIONS ShortCollections

#define VALUE_SETS ShortSets

#define VALUE_ARRAYS ShortArrays

/* Implementations */
#define OPEN_HASH_SET DoubleLinkedOpenHashSet

#define OPEN_HASH_BIG_SET DoubleLinkedOpenHashBigSet

#define OPEN_DOUBLE_HASH_SET DoubleLinkedOpenDoubleHashSet

#define OPEN_HASH_MAP Double2ShortLinkedOpenHashMap

#define STRIPED_OPEN_HASH_MAP StripedDouble2ShortOpenHashMap

#define OPEN_DOUBLE_HASH_MAP Double2ShortLinkedOpenDoubleHashMap

#define ARRAY_SET DoubleArraySet

#define ARRAY_MAP Double2ShortArrayMap

#define LINKED_OPEN_HASH_SET DoubleLinkedOpenHashSet

#define AVL_TREE_SET DoubleAVLTreeSet

#define RB_TREE_SET DoubleRBTreeSet

#define AVL_TREE_MAP Double2ShortAVLTreeMap

#define RB_TREE_MAP Double2ShortRBTreeMap

#define ARRAY_LIST DoubleArrayList

#define BIG_ARRAY_BIG_LIST DoubleBigArrayBigList

#define ARRAY_FRONT_CODED_LIST DoubleArrayFrontCodedList

#define HEAP_PRIORITY_QUEUE DoubleHeapPriorityQueue

#define HEAP_SEMI_INDIRECT_PRIORITY_QUEUE DoubleHeapSemiIndirectPriorityQueue

#define HEAP_INDIRECT_PRIORITY_QUEUE DoubleHeapIndirectPriorityQueue

#define HEAP_SESQUI_INDIRECT_DOUBLE_PRIORITY_QUEUE DoubleHeapSesquiIndirectDoublePriorityQueue

#define HEAP_INDIRECT_DOUBLE_PRIORITY_QUEUE DoubleHeapIndirectDoublePriorityQueue

#define ARRAY_FIFO_QUEUE DoubleArrayFIFOQueue

#define ARRAY_PRIORITY_QUEUE DoubleArrayPriorityQueue

#define ARRAY_INDIRECT_PRIORITY_QUEUE DoubleArrayIndirectPriorityQueue

#define ARRAY_INDIRECT_DOUBLE_PRIORITY_QUEUE DoubleArrayIndirectDoublePriorityQueue

/* Synchronized wrappers */
#define SYNCHRONIZED_COLLECTION SynchronizedDoubleCollection

#define SYNCHRONIZED_SET SynchronizedDoubleSet

#define SYNCHRONIZED_SORTED_SET SynchronizedDoubleSortedSet

#define SYNCHRONIZED_FUNCTION SynchronizedDouble2ShortFunction

#define SYNCHRONIZED_MAP SynchronizedDouble2ShortMap

#define SYNCHRONIZED_LIST SynchronizedDoubleList

/* Unmodifiable wrappers */
#define UNMODIFIABLE_COLLECTION UnmodifiableDoubleCollection

#define UNMODIFIABLE_SET UnmodifiableDoubleSet

#define UNMODIFIABLE_SORTED_SET UnmodifiableDoubleSortedSet

#define UNMODIFIABLE_FUNCTION UnmodifiableDouble2ShortFunction

#define UNMODIFIABLE_MAP UnmodifiableDouble2ShortMap

#define UNMODIFIABLE_LIST UnmodifiableDoubleList

#define UNMODIFIABLE_KEY_ITERATOR UnmodifiableDoubleIterator

#define UNMODIFIABLE_KEY_BIDI_ITERATOR UnmodifiableDoubleBidirectionalIterator

#define UNMODIFIABLE_KEY_LIST_ITERATOR UnmodifiableDoubleListIterator

/* Other wrappers */
#define KEY_READER_WRAPPER DoubleReaderWrapper

#define KEY_DATA_INPUT_WRAPPER DoubleDataInputWrapper

/* Methods (keys) */
#define NEXT_KEY nextDouble
#define PREV_KEY previousDouble
#define FIRST_KEY firstDoubleKey
#define LAST_KEY lastDoubleKey
#define GET_KEY getDouble
#define REMOVE_KEY removeDouble
#define READ_KEY readDouble
#define WRITE_KEY writeDouble
#define DEQUEUE dequeueDouble
#define DEQUEUE_LAST dequeueLastDouble
#define SUBLIST_METHOD doubleSubList
#define SINGLETON_METHOD doubleSingleton

#define FIRST firstDouble
#define LAST lastDouble
#define TOP topDouble
#define PEEK peekDouble
#define POP popDouble
#define KEY_ITERATOR_METHOD doubleIterator

#define KEY_LIST_ITERATOR_METHOD doubleListIterator

#define KEY_EMPTY_ITERATOR_METHOD emptyDoubleIterator

#define AS_KEY_ITERATOR asDoubleIterator

#define TO_KEY_ARRAY toDoubleArray
#define ENTRY_GET_KEY getDoubleKey
#define REMOVE_FIRST_KEY removeFirstDouble
#define REMOVE_LAST_KEY removeLastDouble
#define PARSE_KEY parseDouble
#define LOAD_KEYS loadDoubles
#define LOAD_KEYS_BIG loadDoublesBig
#define STORE_KEYS storeDoubles
/* Methods (values) */
#define NEXT_VALUE nextShort
#define PREV_VALUE previousShort
#define READ_VALUE readShort
#define WRITE_VALUE writeShort
#define VALUE_ITERATOR_METHOD shortIterator

#define ENTRY_GET_VALUE getShortValue
#define REMOVE_FIRST_VALUE removeFirstShort
#define REMOVE_LAST_VALUE removeLastShort
/* Methods (keys/values) */
#define ENTRYSET double2ShortEntrySet
/* Methods that have special names depending on keys (but the special names depend on values) */
#if #keyclass(Object) || #keyclass(Reference)
#define GET_VALUE getShort
#define REMOVE_VALUE removeShort
#else
#define GET_VALUE get
#define REMOVE_VALUE remove
#endif
/* Equality */
#ifdef Custom
#define KEY_EQUALS(x,y) ( strategy.equals( (x),  KEY_GENERIC_CAST (y) ) )
#else
#if #keyclass(Object)
#define KEY_EQUALS(x,y) ( (x) == null ? (y) == null : (x).equals(y) )
#define KEY_EQUALS_NOT_NULL(x,y) ( (x).equals(y) )
#else
#define KEY_EQUALS(x,y) ( (x) == (y) )
#define KEY_EQUALS_NOT_NULL(x,y) ( (x) == (y) )
#endif
#endif

#if #valueclass(Object)
#define VALUE_EQUALS(x,y) ( (x) == null ? (y) == null : (x).equals(y) )
#else
#define VALUE_EQUALS(x,y) ( (x) == (y) )
#endif

/* Object/Reference-only definitions (keys) */
#if #keyclass(Object) || #keyclass(Reference)
#define REMOVE remove
#define KEY_OBJ2TYPE(x) (x)
#define KEY_CLASS2TYPE(x) (x)
#define KEY2OBJ(x) (x)
#if #keyclass(Object)
#ifdef Custom
#define KEY2JAVAHASH(x) ( strategy.hashCode( KEY_GENERIC_CAST (x)) )
#define KEY2INTHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( strategy.hashCode( KEY_GENERIC_CAST (x)) ) )
#define KEY2LONGHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)strategy.hashCode( KEY_GENERIC_CAST (x)) ) )
#else
#define KEY2JAVAHASH(x) ( (x) == null ? 0 : (x).hashCode() )
#define KEY2INTHASH(x) ( (x) == null ? 0x87fcd5c : it.unimi.dsi.fastutil.HashCommon.murmurHash3( (x).hashCode() ) )
#define KEY2LONGHASH(x) ( (x) == null ? 0x810879608e4259ccL : it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)(x).hashCode() ) )
#endif
#else
#define KEY2JAVAHASH(x) ( (x) == null ? 0 : System.identityHashCode(x) )
#define KEY2INTHASH(x) ( (x) == null ? 0x87fcd5c : it.unimi.dsi.fastutil.HashCommon.murmurHash3( System.identityHashCode(x) ) )
#define KEY2LONGHASH(x) ( (x) == null ? 0x810879608e4259ccL : it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)System.identityHashCode(x) ) )
#endif
#define KEY_CMP(x,y) ( ((Comparable<KEY_GENERIC_CLASS>)(x)).compareTo(y) )
#define KEY_CMP_EQ(x,y) ( ((Comparable<KEY_GENERIC_CLASS>)(x)).compareTo(y) == 0 )
#define KEY_LESS(x,y) ( ((Comparable<KEY_GENERIC_CLASS>)(x)).compareTo(y) < 0 )
#define KEY_LESSEQ(x,y) ( ((Comparable<KEY_GENERIC_CLASS>)(x)).compareTo(y) <= 0 )
#define KEY_NULL (null)
#else
/* Primitive-type-only definitions (keys) */
#define REMOVE rem
#define KEY_CLASS2TYPE(x) ((x).KEY_VALUE())
#define KEY_OBJ2TYPE(x) (KEY_CLASS2TYPE((KEY_CLASS)(x)))
#define KEY2OBJ(x) (KEY_CLASS.valueOf(x))
#if #keyclass(Boolean)
#define KEY_CMP_EQ(x,y) ( (x) == (y) )
#define KEY_NULL (false)
#define KEY_CMP(x,y) ( !(x) && (y) ? -1 : ( (x) == (y) ? 0 : 1 ) )
#define KEY_LESS(x,y) ( !(x) && (y) )
#define KEY_LESSEQ(x,y) ( !(x) || (y) )
#else
#define KEY_NULL ((KEY_TYPE)0)
#if #keyclass(Float) || #keyclass(Double)
#define KEY_CMP_EQ(x,y) ( KEY_CLASS.compare((x),(y)) == 0 )
#define KEY_CMP(x,y) ( KEY_CLASS.compare((x),(y)) )
#define KEY_LESS(x,y) ( KEY_CLASS.compare((x),(y)) < 0 )
#define KEY_LESSEQ(x,y) ( KEY_CLASS.compare((x),(y)) <= 0 )
#else
#define KEY_CMP_EQ(x,y) ( (x) == (y) )
#define KEY_CMP(x,y) ( (x) < (y) ? -1 : ( (x) == (y) ? 0 : 1 ) )
#define KEY_LESS(x,y) ( (x) < (y) )
#define KEY_LESSEQ(x,y) ( (x) <= (y) )
#endif
#if #keyclass(Float)
#define KEY2LEXINT(x) fixFloat(x)
#elif #keyclass(Double)
#define KEY2LEXINT(x) fixDouble(x)
#else
#define KEY2LEXINT(x) (x)
#endif
#endif
#ifdef Custom
#define KEY2JAVAHASH(x) ( strategy.hashCode(x) )
#define KEY2INTHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( strategy.hashCode(x) ) )
#define KEY2LONGHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)strategy.hashCode(x) ) )
#else
#if #keyclass(Float)
#define KEY2JAVAHASH(x) it.unimi.dsi.fastutil.HashCommon.float2int(x)
#define KEY2INTHASH(x) it.unimi.dsi.fastutil.HashCommon.murmurHash3( it.unimi.dsi.fastutil.HashCommon.float2int(x) )
#define KEY2LONGHASH(x) it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)it.unimi.dsi.fastutil.HashCommon.float2int(x) )
#elif #keyclass(Double)
#define KEY2JAVAHASH(x) it.unimi.dsi.fastutil.HashCommon.double2int(x)
#define KEY2INTHASH(x) (int)it.unimi.dsi.fastutil.HashCommon.murmurHash3(Double.doubleToRawLongBits(x))
#define KEY2LONGHASH(x) it.unimi.dsi.fastutil.HashCommon.murmurHash3(Double.doubleToRawLongBits(x))
#elif #keyclass(Long)
#define KEY2JAVAHASH(x) it.unimi.dsi.fastutil.HashCommon.long2int(x)
#define KEY2INTHASH(x) (int)it.unimi.dsi.fastutil.HashCommon.murmurHash3(x)
#define KEY2LONGHASH(x) it.unimi.dsi.fastutil.HashCommon.murmurHash3(x)
#elif #keyclass(Boolean)
#define KEY2JAVAHASH(x) ((x) ? 1231 : 1237)
#define KEY2INTHASH(x) ((x) ? 0xfab5368 : 0xcba05e7b)
#define KEY2LONGHASH(x) ((x) ? 0x74a19fc8b6428188L : 0xbaeca2031a4fd9ecL)
#else
#define KEY2JAVAHASH(x) (x)
#define KEY2INTHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( (x) ) )
#define KEY2LONGHASH(x) ( it.unimi.dsi.fastutil.HashCommon.murmurHash3( (long)(x) ) )
#endif
#endif
#endif
/* Object/Reference-only definitions (values) */
#if #valueclass(Object) || #valueclass(Reference)
#define VALUE_OBJ2TYPE(x) (x)
#define VALUE_CLASS2TYPE(x) (x)
#define VALUE2OBJ(x) (x)
#if #valueclass(Object)
#define VALUE2JAVAHASH(x) ( (x) == null ? 0 : (x).hashCode() )
#else
#define VALUE2JAVAHASH(x) ( (x) == null ? 0 : System.identityHashCode(x) )
#endif
#define VALUE_NULL (null)
#define OBJECT_DEFAULT_RETURN_VALUE (this.defRetValue)
#else
/* Primitive-type-only definitions (values) */
#define VALUE_CLASS2TYPE(x) ((x).VALUE_VALUE())
#define VALUE_OBJ2TYPE(x) (VALUE_CLASS2TYPE((VALUE_CLASS)(x)))
#define VALUE2OBJ(x) (VALUE_CLASS.valueOf(x))
#if #valueclass(Float) || #valueclass(Double) || #valueclass(Long)
#define VALUE_NULL (0)
#define VALUE2JAVAHASH(x) it.unimi.dsi.fastutil.HashCommon.short2int(x)
#elif #valueclass(Boolean)
#define VALUE_NULL (false)
#define VALUE2JAVAHASH(x) (x ? 1231 : 1237)
#else
#if #valueclass(Integer)
#define VALUE_NULL (0)
#else
#define VALUE_NULL ((VALUE_TYPE)0)
#endif
#define VALUE2JAVAHASH(x) (x)
#endif
#define OBJECT_DEFAULT_RETURN_VALUE (null)
#endif
#include "drv/LinkedOpenHashMap.drv"
