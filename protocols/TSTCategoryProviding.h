/* Generated by RuntimeBrowser.
 */

@protocol TSTCategoryProviding

@required

- (unsigned char)aggregateTypeForColumnUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1 atGroupLevel:(unsigned char)arg2;
- (TSUUUIDSet *)allGroupUIDs;
- (TSUUUIDSet *)allRowUIDsAtSameLevelAsRowIndex:(void *)arg1 withFilter:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }, struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }, void*
- (void)applyGroupingColumns:(TSTGroupingColumnList *)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })baseTableUID;
- (unsigned short)categoryColumnIndex;
- (double)categoryColumnWidth;
- (unsigned char)categoryGroupLevelAtLabelRow:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtRow:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtSummaryRow:(unsigned int)arg1;
- (struct TSCECategoryRef { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })categoryRefReferringToCellRef:(const struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (NSIndexSet *)collapseSummaryGroupUIDs:(TSUUUIDSet *)arg1;
- (NSString *)columnDisplayNameForCategoryLevel:(unsigned char)arg1;
- (NSIndexSet *)expandSummaryGroupUIDs:(TSUUUIDSet *)arg1;
- (TSTGroupBy *)groupBy;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })groupByUid;
- (unsigned char)groupLevelForGroupUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (unsigned long long)groupingColumnLevelCountForColumn:(unsigned short)arg1;
- (NSIndexSet *)indexesForBodyColumns;
- (NSIndexSet *)indexesForBodyRows;
- (NSIndexSet *)indexesForCategoryColumns;
- (NSIndexSet *)indexesForCategoryColumnsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForGroupingColumns;
- (NSIndexSet *)indexesForGroupingColumnsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForLabelRows;
- (NSIndexSet *)indexesForLabelRowsAtGroupLevel:(unsigned char)arg1;
- (NSIndexSet *)indexesForLabelRowsAtGroupLevel:(unsigned char)arg1 inRegion:(TSTCellRegion *)arg2;
- (NSIndexSet *)indexesForLabelRowsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForLabelRowsUpToGroupLevel:(unsigned char)arg1 omitGroupsWithUids:(const struct UUIDSet<TSP::UUIDSet> { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg2;
- (NSIndexSet *)indexesForSummaryAndBodyRowsInGroupUIDs:(TSUUUIDSet *)arg1;
- (NSIndexSet *)indexesForSummaryAndLabelRows;
- (NSIndexSet *)indexesForSummaryAndLabelRowsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForSummaryRows;
- (NSIndexSet *)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg1;
- (NSIndexSet *)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg1 inRegion:(TSTCellRegion *)arg2;
- (NSIndexSet *)indexesForSummaryRowsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForSummaryRowsUpToGroupLevel:(unsigned char)arg1 omitGroupsWithUids:(const struct UUIDSet<TSP::UUIDSet> { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg2;
- (bool)isCategoryAnyKindOfCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategoryColumn:(unsigned short)arg1;
- (bool)isCategoryColumnUneditableCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategoryGroupOrParentsCollapsed:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (bool)isCategoryGroupValueCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategoryGroupValueLabelCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategoryGroupingColumn:(unsigned short)arg1;
- (bool)isCategoryLabelCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategoryLabelRow:(unsigned int)arg1;
- (bool)isCategorySummaryCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (bool)isCategorySummaryOrLabelRow:(unsigned int)arg1;
- (bool)isCategorySummaryRow:(unsigned int)arg1;
- (bool)isCategorySummaryRowCollapsed:(unsigned int)arg1;
- (double)labelRowHeightAtCategoryLevel:(unsigned char)arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })numberOfBaseColumns;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfBaseFooterRows;
- (struct TSUModelColumnIndex { unsigned short x1; })numberOfBaseHeaderColumns;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfBaseHeaderRows;
- (struct TSUModelRowIndex { unsigned int x1; })numberOfBaseRows;
- (unsigned int)numberOfCategoryColumns;
- (unsigned int)numberOfCategoryLevels;
- (struct TSUChromeColumnIndex { unsigned short x1; })numberOfChromeColumns;
- (struct TSUChromeRowIndex { unsigned int x1; })numberOfChromeFooterRows;
- (struct TSUChromeColumnIndex { unsigned short x1; })numberOfChromeHeaderColumns;
- (struct TSUChromeRowIndex { unsigned int x1; })numberOfChromeHeaderRows;
- (struct TSUChromeRowIndex { unsigned int x1; })numberOfChromeRows;
- (NSIndexSet *)populatedCategoryGroupLevelsInColumn:(unsigned short)arg1;
- (TSTCellRegion *)regionSubtractingCategoryColumnsAndRows:(TSTCellRegion *)arg1;
- (void)resetViewMap;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rowRangeUnderSummaryOrLabelRow:(unsigned int)arg1;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg2 atGroupLevel:(unsigned char)arg3;
- (void)setCategoryColumnWidth:(double)arg1;
- (void)setGroupBy:(TSTGroupBy *)arg1;
- (void)setGroupByUid:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setIsCategoryEnabled:(bool)arg1;
- (void)setLabelRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (void)setSummaryRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (bool)shouldDisplaySummaryLabelRowAtGroupLevel:(unsigned char)arg1;
- (double)summaryRowHeightAtCategoryLevel:(unsigned char)arg1;

@end